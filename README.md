# Fibonacci-using-fork
Printing Fibonacci with fork()

###

### Description of Homework

Sizden kullanıcıdan alınan sayının fibonacci serisindeki F n ve sum(F n ) değerlerini bulup ekrana yazdıran
bir C programı yazmanız beklenmektedir. Ata işleminiz (parent process) kullanıcıdan ilgili sayıyı alıp,
çocuk işleme (child process) gönderecek, çocuk işleminiz ise gelen sayıya göre fibonacci toplama
işlemlerini yapacaktır. Ata işleminiz çocuk işlemden gelen hesaplanmış F n ve sum(F n ) değerlerini ekrana
yazacaktır. Veri alış verişinde pipe kullanmanız beklenmektedir. Global değişken kullanılarak
oluşturulan programlar değerlendirilmeyecektir. Yardımcı olması için doküman paylaşılmıştır.
f0=0, f1=1, f2=1, fn= fn-1 + fn-2 for n>=3.

### Build & Run
> gcc fork.c
> ./a.out

### Requirements
```
gcc
Ubuntu OS

```

### Result

![Ekran Görüntüsü - 2020-05-09 13-48-32](https://user-images.githubusercontent.com/50207648/81471727-d08de380-91fb-11ea-9ea3-4842bb328d41.png)
