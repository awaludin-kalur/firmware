; ============================================================
; boards/custom-esp32s3-st7789/custom-esp32s3-st7789.ini
; Environment PlatformIO untuk board custom:
;   ESP32-S3 (N8R2, 8MB flash + 2MB PSRAM) + ST7789 1.14" 135x240
; ============================================================

[env:custom-esp32s3-st7789]
platform = espressif32
board = esp32-s3-devkitc-1
framework = arduino
board_build.partitions = default_16MB.csv   ; ganti ke default_8MB.csv kalau flash kamu 8MB & error saat build

build_flags =
    ${env.build_flags}
    -Iboards/custom-esp32s3-st7789
    -DBOARD_HAS_PSRAM
    -DARDUINO_USB_MODE=1
    -DARDUINO_USB_CDC_ON_BOOT=1

; Aktifkan PSRAM sesuai chip N8R2 (8MB flash, 2MB PSRAM)
board_upload.flash_size = 8MB
board_build.arduino.memory_type = qio_opi

lib_deps =
    ${env.lib_deps}
