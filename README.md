# System-Programmierung
## Hands-on zu Lektion 5
Für Slides und Code Beispiele, siehe [Lektion 5](../../../fhnw-syspr/blob/master/05/README.md)

> *Achtung: Arbeiten Sie nicht direkt auf diesem Repository.*<br/>
> *[Prüfen Sie die vorhandenen Forks, um das Repository für Ihre Klasse zu finden.](../../network/members)*

### a) *fork()*, 15'
* Schreiben Sie ein Programm my_fork.c, das "forkt".
* Nutzen Sie die online System Call Dokumentation.
* Das Programm soll den folgenden Output ausgeben, mit konkreten PID Werten für pid, pid_c und pid_p:<pre>
I'm parent pid of child pid_c
I'm child pid of parent pid_p</pre>
* Entspricht der Output ihren Erwartungen? Wieso?

### b) *exit()*, 15'
* Finden Sie heraus, wieso sich in [fork_stdio_buf.c](http://man7.org/tlpi/code/online/book/procexec/fork_stdio_buf.c.html)<sup>TLPI</sup> der Output dieser beiden Aufrufe unterscheidet:<pre>
$ ./fork_stdio_buf
$ ./fork_stdio_buf > file && cat file</pre>
* Wieso wird ein Teil des Outputs doppelt ausgegeben?
* Wieso wird nur im einen Fall der Output verdoppelt?
* Hinweis: Was passiert bei *fork()* im Speicher?

### c) Zombie-Prozesse, 15'
* Lassen Sie den Beispiel-Code [make_zombie.c](http://man7.org/tlpi/code/online/book/procexec/make_zombie.c.html)<sup>TLPI</sup> laufen.
* Senden Sie dem Zombie-Child ein *SIGKILL* Signal.
* Was macht der *system()* Aufruf im Source Code?
* Hinweis: _&lt;defunct&gt;_ bedeutet Zombie-Prozess.

### d) Eigenes *system()*, 15'
* Implementieren Sie eine eigene *system()* Funktion.
* Nutzen Sie dazu das *sh* Kommando mit Argument *-c*:<pre>
$ sh -c "ls | wc"</pre>
* Vereinfachung: Gerüst von [my_system.c](my_system.c) im Repo.
