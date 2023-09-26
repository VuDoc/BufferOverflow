# BufferOverflow
Buffer Overflow training

Pour compiler le programme : 

gcc vuln.c -o vuln_disable_all -fno-stack-protector -z execstack -no-pie

# Etapes à suivre

Installer gdb-peda sur votre Kali Linux. 

apt update && apt install gdb-peda #nécessité de reboot la machine ensuite

# Configurer gdb-peda 

sudo find / -name "*peda.py*" 2>/dev/null
echo "source /usr/share/gdb-peda/peda.py" >> ~/.gdbinit

# Lancer le programme simplement

./buff

# Tenter de réaliser un overflow

TODO

-HELP- 
python -c 'print("A" * 100)' | ./buff

A partir de quel nombre on trouve un segmentation fault ?

# Lancer le programme avec GDB

gdb ./buff
disas main

Que voit-on ?

# Créer un pattern pour calculer la taille du buffer

 pattern_create 700

 # On le lance dans GDB

 run < <(python -c 'print("<pattern>")')

 


