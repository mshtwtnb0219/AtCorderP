参考サイト
https://qiita.com/sorachandu/items/a06e4ed61d169ba067f3#c%E3%81%AE%E8%A8%AD%E5%AE%9A


git連携

git config --global user.email "(GitのEメールアドレス)"
git config --global user.name "(Gitのユーザネーム)"


sshkeyの作成

ssh-keygen -t rsa -b 4096 -C "your_email@example.com"


作成した公開鍵をgithubに登録
https://github.com/settings/keys

接続確認
ssh -T git@github.com