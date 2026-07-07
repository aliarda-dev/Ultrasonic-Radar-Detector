***Ultrasonic Radar Dedektor***

Bu proje, ultrasonik sensör ve servo motor kullanarak çevreyi açısal olarak tarayan basit bir radar sistemidir. Sistem, farklı açılarda mesafe ölçerek engellerin konumunu tespit eder.

***Donanım***

* Arduino Uno
* HC-SR04 Ultrasonik Sensör
* SG90 Servo Motor (0–180°)
* Buzzer

***Nasıl Çalışır?***

* Ultrasonik sensör trig pini ile tetiklenir 

* Echo süresi `pulseIn()` ile ölçülür

* Ölçülen süre mesafeye dönüştürülür

* Servo motor 0–180° arasında hareket eder

* Her açıda mesafe ölçümü yapılır

* Belirli bir mesafe altına düşüldüğünde buzzer ile uyarı verilir

***Teknik Notlar***

* Tarama işlemi for döngüsü ile gerçekleştirilmiştir
* Sistem veri üretir ancak kayıt tutmaz

***Geliştirme Fikirleri***

* LCD / grafik arayüz ile radar ekranı oluşturmak
* Daha hassas sensör kullanımı
* Çoklu sensör ile kör noktaları azaltmak

🎥 Proje Demo Videosu

Sistemin çalışma videosunu aşağıdan izleyebilirsiniz.



https://github.com/user-attachments/assets/c4946b27-bd35-4965-9a21-fd1a79edb70e


