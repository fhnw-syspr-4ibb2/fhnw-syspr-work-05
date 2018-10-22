# System-Programmierung
## Hands-on zu Lektion 5
Für Slides und Code Beispiele, siehe [Lektion 5](../../../fhnw-syspr/blob/master/05/README.md)

> *Achtung: Arbeiten Sie nicht direkt auf diesem Repository.*<br/>
> *[Prüfen Sie die vorhandenen Forks, um das Repository für Ihre Klasse zu finden.](../../network/members)*

### a) fork(), 15'
* Schreiben Sie ein Programm my_fork.c, das "forkt".
* Nutzen Sie die online System Call Dokumentation.
* Das Programm soll den folgenden Output ausgeben, mit konkreten PID Werten für pid, pid_c und pid_p:<pre>
I'm parent pid of child pid_c
I'm child pid of parent pid_p</pre>
* Entspricht der Output ihren Erwartungen? Wieso?

### b) Signal Masken, 45'
* Schreiben Sie ein Programm *my_sync.c*, das den Code von [fork_sig_sync.c](http://man7.org/tlpi/code/online/book/procexec/fork_sig_sync.c.html)<sup>TLPI</sup> wie folgt erweitert:
* Der neue Code soll ohne *tlpi_hdr.h* und *curr_time.h* builden und Signal Masken für *blocked* und *pending* Signale ausgeben, dort im Code, wo sich was ändert.
* Hinweis: Dokumentation von *sigprocmask()* lesen, *sigpending()* und *printf("%032x", ...)* nutzen.

### c) exit(), 15'
* Finden Sie heraus, wieso sich in [fork_stdio_buf.c](http://man7.org/tlpi/code/online/book/procexec/fork_stdio_buf.c.html)<sup>TLPI</sup> der Output dieser beiden Aufrufe unterscheidet:<pre>
$ ./fork_stdio_buf
$ ./fork_stdio_buf > file && cat file</pre>
* Wieso wird ein Teil des Outputs doppelt ausgegeben?
* Wieso wird nur im einen Fall der Output verdoppelt?
* Hinweis: Was passiert bei *fork()* im Speicher?

### d) Zombie-Prozesse, 15'
* Lassen Sie den Beispiel-Code [make_zombie.c](http://man7.org/tlpi/code/online/book/procexec/make_zombie.c.html)<sup>TLPI</sup> laufen.
* Senden Sie dem Zombie-Child ein SIGKILL Signal.
* Was macht der system() Aufruf im Source Code?
* Hinweis: _&lt;defunct&gt;_ bedeutet Zombie-Prozess.

### e) Eigenes *system()*, 15'
* Implementieren Sie eine eigene system() Funktion.
* Nutzen Sie dazu das sh Kommando mit Argument -c:<pre>
$ sh -c "ls | wc"</pre>
* Vereinfachung: Gerüst von [my_system.c](my_system.c) im Repo.

### Abgabe (optional)
* Lokale Änderungen [committen und pushen](#git).
* GitHub [Issue erstellen](../../issues/new) mit "Bitte um Review, @tamberg".
* Offene Fragen ausformulieren, was geht nicht, was haben Sie versucht.
* GitHub mailt mir (@tamberg) automatisch, ich versuche in weniger als 24h zu antworten :)

## Tools
### Git
Auf Ihrem Computer
* Zu Beginn jeder Lektion wird ein Hands-on Repository Link freigeschaltet
* Nachdem Sie das "Assessment" annehmen, bekommen Sie per Email ein Repository
* Die REPO_URL enthält Ihren GitHub Account USER_NAME und Ihre Klasse 3ia oder 3ib, z.B.<br/>
            https://github.com/fhnw-syspr-3ia/fhnw-syspr-work-05-tamberg

Auf dem Raspberry Pi
* Repository klonen<pre>
    $ cd ~
    $ git clone REPO_URL</pre>
* Neue Datei kreieren<pre>
    $ git add FILE</pre>
* Änderungen committen<pre>
    $ git commit FILE -m "Fixed all bugs"</pre>
* Änderungen hochladen<pre>
    $ git push</pre>

### Nano
Auf dem Raspberry Pi
* Neue oder bestehende Datei öffnen mit $ nano FILE
* Editieren (Achtung, nano hat kein Undo)
* Speichern mit `CRTL-X` `Y` `RETURN`

### SSH
Auf Ihrem Computer
* Terminal öffnen (Mac) oder `WINDOWS` `R` cmd `RETURN` (Windows)
* SSH Session starten mit<pre>
    $ ssh pi@raspberrypi.local</pre>

## Support
- [FHNW Syspr Slack](https://fhnw-syspr.slack.com/)
