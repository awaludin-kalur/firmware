// ============================================================
// Custom board: ESP32-S3 DevKit + ST7789 1.14" 135x240 IPS
// Pin mapping sesuai wiring yang disolder manual oleh user
// (Sebelumnya bernama pins_arduino.h — di-rename supaya tidak
//  bentrok dengan pins_arduino.h bawaan Arduino core / variant board)
// ============================================================

#pragma once

// ---------- Display (ST7789 135x240) ----------
#define TFT_MOSI   11   // SDA
#define TFT_SCLK   12   // SCL
#define TFT_CS     10   // CS
#define TFT_DC      9   // DC
#define TFT_RST     8   // RES
#define TFT_BL     14   // Backlight

#define ST7789_DRIVER 1
#define TFT_WIDTH    135
#define TFT_HEIGHT   240
#define TFT_RGB_ORDER TFT_RGB   // ganti ke TFT_BGR kalau warna terbalik saat dites
#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY 20000000

// Offset umum untuk panel 135x240 (mirip TTGO T-Display) — sesuaikan kalau gambar
// tidak center / terpotong setelah dites pertama kali
#define TFT_OFFSET_X  52
#define TFT_OFFSET_Y  40

// ---------- Tombol (opsional, sesuaikan kalau kamu pasang tombol fisik) ----------
// #define BTN_UP     -1
// #define BTN_DOWN   -1
// #define BTN_SELECT -1
// #define BTN_BACK   -1

// ---------- Catatan pin yang SENGAJA dihindari ----------
// GPIO0, 3, 45, 46 -> strapping pin, jangan dipakai untuk periferal
// GPIO19, 20       -> USB D-/D+ internal (kalau pakai native USB CDC)
