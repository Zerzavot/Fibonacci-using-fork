# Fibonacci-using-fork
Printing Fibonacci with fork()

###

### Description of Homework

Sizden kullanıcıdan alınan sayının fibonacci serisindeki F n ve sum(F n ) değerlerini bulup<br>
ekrana yazdıran bir C programı yazmanız beklenmektedir.
Ata işleminiz (parent process) kullanıcıdan ilgili sayıyı alıp,
çocuk işleme (child process) gönderecek,
çocuk işleminiz ise gelen sayıya göre fibonacci toplama işlemlerini yapacaktır.
Ata işleminiz çocuk işlemden gelen hesaplanmış F n ve sum(F n ) değerlerini ekrana yazacaktır.<br> 
Veri alış verişinde pipe kullanmanız beklenmektedir. <br> Global değişken kullanılarak
oluşturulan programlar değerlendirilmeyecektir. Yardımcı olması için doküman paylaşılmıştır.<br>
f0=0, f1=1, f2=1, fn= fn-1 + fn-2 for n>=3.

### Working Principle
I write a c program that finds the fibonacci series and its sum.<br>
Parent process takes the number of elements from user and send it to child process. <br>
Child process find the fibonacci series, print them and send the sum of elements to parent.<br>
Parent process print the sum value. I did this homework with using pipe. Have fun:)


### Build & Run
```

gcc fork.c
> ./a.out

```

### Requirements
> gcc
> Ubuntu OS

### Result

![Ekran Görüntüsü - 2020-05-09 13-48-32](https://user-images.githubusercontent.com/50207648/81471727-d08de380-91fb-11ea-9ea3-4842bb328d41.png)
