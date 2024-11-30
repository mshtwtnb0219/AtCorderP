#!/bin/bash

cd ~/competitive/practice
# ソースファイルの決定
SOURCE_FILE="${1:-main.cpp}" # 引数が無い場合はmain.cppを使用

# "atcoder"の出現回数をカウント
ATCODER_COUNT=$(grep -o "atcoder" "$SOURCE_FILE" | wc -l)

# コンパイルオプションの決定
CXX_FLAGS="-std=gnu++20 -O2 -Wall -Wextra"
if [ "$ATCODER_COUNT" -ge 2 ]; then
    CXX_FLAGS+=" -I./ac-library"
fi

# コンパイル実行
g++ $CXX_FLAGS "$SOURCE_FILE"
