# 📡 Otonom Ultrasonik Radar ve Çevresel Tarama Sistemi

Bu proje **Akdeniz Üniversitesi Elektrik-Elektronik Mühendisliği** bünyesindeki gömülü sistemler çalışmalarıma temel teşkil eden, robotik navigasyon ve temassız algılama teknolojilerinin bir prototipidir. Çalışma kapsamında, ultrasonik ses dalgaları kullanılarak çevresel bir haritalama yapılmış ve otonom bir engel algılama algoritması geliştirilmiştir.

---

### 🛠️ Sistem Mimarisi ve Donanım Bileşenleri

* **Mikrokontrolcü:** Arduino Uno 
* **Mesafe Algılama:** HC-SR04 Ultrasonik Sensör 
* **Açısal Kontrol:** SG90 Mikro Servo Motor (180° tarama kapasiteli)
* **İkaz Birimi:** Aktif Buzzer 

---

### ⚙️ Teknik Çalışma Prensibi

Sistem, fiziksel dünyadaki veriyi dijital işleme tabi tutmak için şu aşamaları izler:

1.  **Sinyal Tetikleme (Triggering):** `Trig` pini üzerinden iletilen 10µs'lik kare dalga sinyali ile sensörün akustik dalga yayması sağlanır.
2.  **Veri Toplama (Echo Acquisition):** Engele çarpıp dönen dalganın süresi `pulseIn()` fonksiyonu ile mikrosaniye hassasiyetinde sayısallaştırılır.
3.  **Dinamik Tarama:** Servo motor `for` döngüsü aracılığıyla 0-180 derece arasında lineer hareket ederken, her açısal adımda gerçek zamanlı mesafe analizi gerçekleştirilir.

---

### 📖 Mühendislik Kazanımları ve Analiz

* Gömülü Yazılım Mimarisi: C programlama dilinde döngüsel kontrol ve fonksiyonel programlama pratikleri.
* Analog-Dijital Etkileşim: Fiziksel bir büyüklüğün (mesafe) sensör aracılığıyla lojik verilere dönüştürülmesi ve işlenmesi.
* Hata Yönetimi (Debugging): Seri haberleşme (Serial Monitor) üzerinden veri analizi yaparak sistemdeki donanımsal veya yazılımsal darboğazların giderilmesi.

---

### 💡 Gelecek Vizyonu (Scalability)

Bu proje, endüstriyel 'AGV' (Otonom Yönlendirmeli Araçlar) ve 'İHA'ların kullandığı engel sakınma sistemlerinin temel mantığını simüle etmektedir.


### 🎥 Proje Demo Videosu





https://github.com/user-attachments/assets/6e77fc9e-064b-4cb0-93d3-faa3d56c5034



Ali Arda Kocabörek Akdeniz University | EEE Student# Led-Animation-With-Arrays

