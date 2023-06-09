# Cara Menjalankan Simulasi pada VSCODE
1. Buka folder ini pada VSCode
2. Download extension Wokwi simulator 
3. Pastikan path firmware.bin dan firmware.elf pada wokwi.toml sudah benar
4. Klik ctrl+shift+p lalu ketik wokwi start simulator
<br>
<br>

# Cara Build Firmware
1. Buka folder ini pada VSCode
2. Download extension platformio
3. Download library/dependencies yang diperlukan pada PIO Home
4. Klik ctrl+shift+p lalu ketik platformio build
5. Jika berhasil akan muncul file firmware.bin dan firmware.elf pada folder .pio/build/esp32dev/
