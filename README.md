How to compile for question A:
  make
How to run for question A;
  ./lab3_A


for question B:  

Enter size:1000
sort(): 0.000702 seconds
v1/v2 are different.
insertion_sort(): 0.028162 seconds
v1/v2 are the same.

------------------------------------

Enter size:10000
sort(): 0.011317 seconds
v1/v2 are different.
insertion_sort(): 1.32732 seconds
v1/v2 are the same.

------------------------------------

Enter size:100000
sort(): 0.07998 seconds
v1/v2 are different.
insertion_sort(): 127.939 seconds
v1/v2 are the same.

-------------------------------------

由questionB的實驗結果，當實驗的數量愈大時時間的差異就愈明顯。
由理論得知insertion sort的平均時間為Ο(n^2)，
而C++內的sort為Quick sory的平均時間為O(n log n)。
由實驗結果，當資料增為10倍，insertion sort時間約為100倍，
而quick sort約為 10倍，與理論大致相符。
也同時驗證了quick sort的速度比較快。
