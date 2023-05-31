# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Selection Sort 選擇排序
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [示意圖](#示意圖)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
選擇排序法（Selection Sort）是一種簡單直觀的排序算法。<br>
它的基本思想是在未排序的數列中，選擇最小（或最大）的元素，將其放到已排序部分的末尾，<br>
然後繼續選擇下一個最小（或最大）的元素，重複這個過程，直到整個數列排序完成。<br>
<br>
以下是選擇排序法的一般步驟：<br>
- 從數列中找到最小（或最大）的元素。
- 將該元素與數列的第一個元素進行交換，將最小（或最大）元素放在數列的起始位置。
- 在剩餘的未排序數列中，重複步驟1和步驟2，找到下一個最小（或最大）的元素，並將其放在已排序部分的末尾。
- 重複執行步驟3，直到整個數列排序完成。

<br>

在選擇排序法中，我們需要進行 n-1 輪選擇，每一輪選擇需要執行 n-i 次比較操作，其中 n 是數列的長度。<br>
因此，選擇排序的時間複雜度是 O(n^2)，它是一種效率較低的排序算法。<br>
然而，選擇排序具有原地排序（in-place）的特點，並且不需要額外的空間，因此在某些特定情況下仍然有一定的應用價值。<br>

---

## 示意圖:
<img src="https://drive.google.com/uc?id=1XYNU6b5xaAq1h6-F1ryeoQ_BFl-_rwLc" height="60%" width="60%"/>

> 圖片來源：[iThome鐵人賽(Frank) - 演算法 選擇排序法Selection Sort](https://ithelp.ithome.com.tw/articles/10276719)

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-selection-sort/blob/main/C%2B%2B/main.cpp) - Selection Sort (C++)

---

## 參考資料
* [Wiki - Selection Sort](https://zh.wikipedia.org/wiki/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F) <br>
* [iThome鐵人賽(Frank) - 演算法 選擇排序法Selection Sort](https://ithelp.ithome.com.tw/articles/10276719) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
