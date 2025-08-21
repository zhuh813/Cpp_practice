"# Cpp_practice" 

# 1. Decimal ⭤  Binary

### (i). 二進位轉十進位
**輸入**：二進位字串 `binary`
**輸出**：十進位整數 `decimal`

1. 將 `decimal ← 0`。
2. 取得字串長度 `N ← length(binary)`，並設定 `power ← N − 1`（最左位的 2 次方指數）。
3. 自左而右掃描每一個位元（`position = 0 … N-1`）：
   a. 若 `binary[position] == '1'`，則把該位的權重加到總和：
     `decimal ← decimal + 2^power`。
   b. 將 `power ← power − 1`（無論該位是否為 1 都遞減）。
4. 輸出 `decimal`。

> 說明：此流程與程式一致——從最左位起，維持一個由 `N−1` 到 `0` 的指數 `power`；遇到 `1` 就把對應的 $2^{power}$ 累加，最後得到十進位值。



### (i). 十進位轉二進位
**輸入**：正整數 `decimal`
**輸出**：其二進位字串 `binary`

1. 初始化
   1.1 設 `binary ← ""`（空字串）。
   1.2 設 `dividend ← decimal`。

2. 決定最左位的位權
   2.1 計算 `N ← ⌊log2(decimal)⌋`，這是十進位數中最大的 2 的冪次指數（最左邊位元的位權）。

3. 由高位到低位逐一決定每一位
   對 `i` 由 `N` 遞減到 `0` 重複：
   3.1 設 `divisor ← 2^i`。
   3.2 若 `dividend / divisor > 0`（整數除法，等價於 `dividend ≥ divisor`）：
     a) 在 `binary` 後方加入字元 `'1'`。
     b) 更新 `dividend ← dividend − divisor`。
   3.3 否則：
     a) 在 `binary` 後方加入字元 `'0'`。

4. 回傳結果
   4.1 回傳字串 `binary`。
