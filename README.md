# 推論時間計測用テストコード

## 概要
変数名提案システムの推論時間を計測するためのテストコード集です。
コードの規模（変数数・行数）と処理時間の関係を分析するために使用します。

## テストコード一覧

| ファイル名 | 変数数 | 行数 | 処理時間 | 説明 |
|-----------|--------|------|---------|------|
| test_01_simple.c | 2 | 12 | 16.53秒 | 単純なループ（1-10の和） |
| test_02_medium.c | 6 | 28 | 17.97秒 | 配列の最大値・最小値・合計・平均 |
| test_03_large.c | 12+ | 60 | 16.89秒 | 複数関数を含むプログラム（四則演算・平均計算） |

## 各テストコードの詳細

### test_01_simple.c
- **変数**: `sum`, `i`
- **内容**: 1から10までの整数の和を計算
- **特徴**: 最もシンプルなループ構造

### test_02_medium.c
- **変数**: `numbers`, `max`, `min`, `sum`, `i`, `avg`
- **内容**: 配列から最大値・最小値・合計・平均を求める
- **特徴**: 配列操作と条件分岐を含む

### test_03_large.c
- **変数**: `a`, `b`, `result` (各関数内), `x`, `y`, `sum_result`, `diff_result`, `prod_result`, `div_result`, `values`, `average`, `final_total`, `total`, `avg`, `i`
- **内容**: 四則演算関数と配列平均計算関数を持つプログラム
- **特徴**: 複数関数定義、ローカル変数の多用

## 実行方法

```bash
# 仮想環境を有効化
source venv2/Scripts/activate  # Windows
# または
source venv2/bin/activate      # Linux/Mac

# 各テストコードを実行
python src/predict.py benchmark/test_01_simple.c
python src/predict.py benchmark/test_02_medium.c
python src/predict.py benchmark/test_03_large.c
```

