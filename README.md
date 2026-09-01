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

***Not*** Projenin pcb medyası ve gerber dosyaları yüklendi HC-SR04 sensörü SG-90 servo motoru üzerine montaj edilecek şekilde tasarlandı. Bu yüzden HC-SR04'ün kablolaması jumperlar ile yapılmalı.

🎥 Proje Demo Videosu

Sistemin çalışma videosunu aşağıdan izleyebilirsiniz.



https://github.com/user-attachments/assets/c4946b27-bd35-4965-9a21-fd1a79edb70e

📷 Proje PCB Medyası

<img width="842" height="835" alt="ultrasonic-radar-detector4" src="https://github.com/user-attachments/assets/1fd2a233-89b7-494c-9ef3-4021cd981156" />



