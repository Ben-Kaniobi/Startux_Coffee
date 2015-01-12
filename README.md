Startux_Coffee
==============

Qt Projekt fürs BeagleBone Black (mit BFH-Cape). Projektarbeit fürs Embedded Linux Modul.

<a href="./img"><img src="./img/logo.png" height="200"></a>


Installation & Start
--------------------

1. Datei *Startux_Coffee* auf das BBB kopieren (z.B. nach */usr/local/bin*)
2. Sicherstellen, dass die Datei ausführbar ist: `chmod +x /usr/local/bin/Startux_Coffee`
3. Software ausführen: `Startux_Coffee`


Funktion
--------

Zu Beginn ist das GUI zu sehen. Solange die Taste T1 nicht gedrückt wird, also die Tasse nicht unter der Kaffeemaschiene steht, soll nichts eingestellt werden können.

Mit druck auf T1 werden die Checkboxen und der Button im GUI aktiviert.

Mit dem "Start" Button wird der Zubereitungsvorgang gestartet.

 - LED 2 -> Wasser kochen
 - LED 3 -> Milch zugeben (Nur wenn Checkbox aktiviert)
 - LED 4 -> Zucker zugeben (Nur wenn Checkbox aktiviert)

Vorgang Beendet: LED 1 blinkt 3 mal