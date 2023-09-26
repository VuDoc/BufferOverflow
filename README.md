# BufferOverflow
Buffer Overflow training

Pour compiler le programme : 

gcc vuln.c -o vuln_disable_all -fno-stack-protector -z execstack -no-pie

# Etapes à suivre

Installer gdb-peda sur votre Kali Linux. 

apt update && apt install gdb-peda #nécessité de reboot la machine ensuite

# Lancer le programme simplement

./buff

# Tenter de réaliser un overflow

TODO

# Lancer le programme avec GDB

gdb buff


