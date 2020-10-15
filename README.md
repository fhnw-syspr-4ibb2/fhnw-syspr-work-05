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

### b) Zombie-Prozesse, 15'
* Schreiben Sie Code, der für 1 Sekunde einen ZombieProzess erzeugt, mit [exit()](http://man7.org/linux/man-pages/man3/exit.3.html), [fork()](http://man7.org/linux/man-pages/man2/fork.2.html), [sleep()](http://man7.org/linux/man-pages/man3/sleep.3.html) und [wait()](http://man7.org/linux/man-pages/man2/waitpid.2.html).<pre>
$ ./my_zombie &
[1] 1001
$ ps aux | grep my_zombie
... 1001 ... ./my_zombie
... 1002 ... [my_zombie] &lt;defunct&gt;</pre>
* Hinweis: &lt;defunct&gt; bedeutet Zombie-Prozess.
