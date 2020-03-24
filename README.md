# System-Programmierung
## Hands-on zu Lektion 5
Für Slides und Code Beispiele, siehe [Lektion 5](../../../fhnw-syspr/blob/master/05/README.md)

> *Achtung: Arbeiten Sie nicht direkt auf diesem Repository.*<br/>
> *[Erstellen Sie eine persönliche Kopie, mit diesem GitHub Classroom Link](https://classroom.github.com/a/86TE0Rb8).*

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
* Schreiben Sie Code, der für 1 Sekunde einen ZombieProzess erzeugt, mit [exit()](http://man7.org/linux/man-pages/man3/exit.3.html), [fork()](http://man7.org/linux/man-pages/man2/fork.2.html), [sleep()](http://man7.org/linux/man-pages/man3/sleep.3.html) und [wait()](http://man7.org/linux/man-pages/man2/waitpid.2.html).<pre>
$ ./my_zombie &
[1] 1001
$ ps aux | grep my_zombie
... 1001 ... ./my_zombie
... 1002 ... [my_zombie] &lt;defunct&gt;</pre>
* Hinweis: &lt;defunct&gt; bedeutet Zombie-Prozess.
