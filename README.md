# soulsum
Calculate "Soul Number".

<blockquote class="twitter-tweet" data-lang="ja"><p lang="ja" dir="ltr">前もTwitterで流れてたけど<br>これ数字が近い人は<br>相性がいんだってよ〜〜<br>数字が同じ人は最高なんだって〜〜<br>ゾッとする話でやってた〜〜<br>俺、4だから同じ人か<br>近い人誰かな〜〜〜〜〜〜 <a href="https://t.co/jUC1uP9AnD">pic.twitter.com/jUC1uP9AnD</a></p>&mdash; ツイッター速報 (@twi_carnival) <a href="https://twitter.com/twi_carnival/status/732782289604612096">2016年5月18日</a></blockquote>
<script async src="//platform.twitter.com/widgets.js" charset="utf-8"></script>

## Install

```sh
$ git clone git@github.com:greymd/soulsum.git
$ cd soulsum
$ make
$ make install
```

## Usage

```sh
# Calculate from standard input
$ echo 20160520 | soulsum
7

# Giving an argument
$ soulsum 19600101
9
```

## Uninstall

```sh
$ make uninstall
```

# License
This software is released under the MIT License.
See [LICENSE](./LICENSE)
