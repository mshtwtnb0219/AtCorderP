#!/bin/bash

#cd ~/competitive/practice

# ソースファイルとモードを指定
SOURCE_FILE="${1:-main.cpp}" # 引数が無い場合は main.cpp を使用
MODE="${2:-release}"        # 引数が無い場合は release モード

# "atcoder"の出現回数をカウント
ATCODER_COUNT=$(grep -o "atcoder" "$SOURCE_FILE" | wc -l)

# コンパイルオプション
if [ "$MODE" = "debug" ]; then
    CXX_FLAGS="-std=gnu++20 -g -O0 -Wall -Wextra" # デバッグ用
else
    CXX_FLAGS="-std=gnu++20 -O2 -Wall -Wextra"    # 通常用
fi

if [ "$ATCODER_COUNT" -ge 2 ]; then
    CXX_FLAGS+=" -I./ac-library"
fi

# コンパイル
g++ $CXX_FLAGS -o a.out "$SOURCE_FILE"
if [ $? -ne 0 ]; then
    echo "コンパイルに失敗しました"
    exit 1
fi

echo "コンパイルが完了しました: $MODE モード"
