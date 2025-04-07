# buton-buzzer-kontrol ![Wokwi CI](https://github.com/robotdevre/buton-buzzer-kontrol/actions/workflows/wokwi.yml/badge.svg)

Bu proje, Arduino Uno kartı kullanılarak dahili **pull-up** direnci ile bir buton yardımıyla buzzer kontrolünü sağlar. Butona basıldığında buzzer 1000 Hz frekansında ses üretir. `tone()` ve `noTone()` fonksiyonları kullanılarak temel ses uygulamaları öğrenilir. Başlangıç seviyesinde sesli uyarı sistemlerini anlamak için idealdir.

---

## 🔧 Kullanılan Malzemeler

- Arduino Uno  
- 1 x Buton  
- 1 x Aktif Buzzer  
- Jumper kablolar  

---

## 🎯 Proje Amacı

- `tone()` ve `noTone()` fonksiyonlarını öğrenmek  
- Dahili **INPUT_PULLUP** direncinin kullanımını göstermek  
- Butona basıldığında buzzer ile sesli uyarı vermek  
- Sesli sistemlerin temelini kavramak  

---

## 📷 Devre Şeması

📁 `diagram.json` dosyasında Wokwi uyumlu devre şeması yer almaktadır.  
🔗 [Projeyi Wokwi'de görmek için tıklayın](https://wokwi.com/projects/426613825238585345)

---

## 💡 Kod

```cpp
const int buzzerPin = 8;
const int buttonPin = 7;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Dahili pull-up direnci etkinleştirildi
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {  // Butona basıldığında LOW olur
    tone(buzzerPin, 1000);   // 1000 Hz frekansında ses
  } else {
    noTone(buzzerPin);
  }
}
``` 
---

## 📫 Benimle İletişime Geç / Takip Et

Eğer proje hakkında bir fikrin varsa, soruların olursa ya da sadece selam vermek istersen; aşağıdaki kanallardan bana ulaşabilir ya da sosyal medya hesaplarımdan takip edebilirsin:

- 📧 [E-posta](mailto:info@robotdevre.com)  
- 📷 [Instagram](https://www.instagram.com/robotdevre/)  
- 🌐 [Web Sitesi](https://robotdevre.com/)  
- 🎥 [YouTube](https://www.youtube.com/@robotdevre)  
- 💼 [LinkedIn](https://www.linkedin.com/in/ugur-kerim-sirke/)  
- 🐦 [X (Twitter)](https://x.com/robotdevre)
