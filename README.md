# 🔢 Arduino 4x4 Keypad Projesi

Bu proje, **Arduino** ile 4x4 matris tuş takımından veri okuma ve basılan tuşları **seri monitörde** görüntüleme üzerine geliştirilmiştir. **Keypad** kütüphanesi kullanılarak yazılmıştır ve **Tinkercad** üzerinde test edilmiştir.

---

## 📌 Proje Amacı
Bu çalışmanın amacı, fiziksel bir tuş takımının Arduino ile nasıl entegre edildiğini göstermek ve kullanıcı girişlerini seri port üzerinden okumayı öğretmektir. Bu sayede:

- Tuş takımlarının çalışma prensibini öğrenebilirsiniz.
- Kullanıcıdan veri alma mantığını kavrayabilirsiniz.
- Seri haberleşme konusunda deneyim kazanabilirsiniz.

---

## ⚙️ Donanım Gereksinimleri
- Arduino Uno / Nano / Mega
- 4x4 Keypad
- Jumper kablolar
- USB bağlantı kablosu

---

## 🔌 Bağlantı Düzeni
| Keypad Pin | Arduino Pin |
|------------|-------------|
| R1         | 9           |
| R2         | 8           |
| R3         | 7           |
| R4         | 6           |
| C1         | 5           |
| C2         | 4           |
| C3         | 3           |
| C4         | 2           |

---

## 🛠 Çalışma Mantığı
- Keypad bir **matris** yapısına sahiptir (satır ve sütunlar).
- Tuşa basıldığında ilgili satır ve sütun kısa devre olur.
- Arduino, Keypad kütüphanesi sayesinde hangi tuşun basıldığını algılar.
- Sonuç seri monitör üzerinde görüntülenir.

---

## 📄 Dokümantasyon
Repoda, proje hakkında detaylı bilgilerin yer aldığı `.docx` dosyası bulunmaktadır. Bu dosyada:

- Proje açıklaması  
- Donanım bağlantı şeması  
- Çalışma mantığı  

gibi başlıklar yer almaktadır.

---

## 📜 Lisans
Bu proje **MIT Lisansı** ile yayınlanmıştır.  
Dilediğiniz gibi kullanabilir, geliştirebilir ve paylaşabilirsiniz.
