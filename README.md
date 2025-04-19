# CMesureTest
Programme de démo de la classe CMesure

Liste des installations à faire
-------------------------------

1. Install PlatformIO Core
2. Install avr-gcc (I use avr-gcc-14.1.0-x64-windows)
3. Download development platform Desktop/Native
4. Run these commands:

Liste des commandes utilisables
-------------------------------

```shell
# Clean build files
$ pio run --target clean

# Build project
$ pio run

# Run program
$ .pio/build/stable/program.exe
```

# test_incertitude_filtrage_prem_ordre()
Equation 1 du filtre passe bas
-------------------------------

Cette version de la formule du filtre passe bas à son incertitude de mesure qui converge
$$OutEq1_{n} = (1.0 - fac) * OutEq1_{n-1} + (fac * Meas_{n})$$


$$\begin{align}
U^2(OutEq1_{n}) & = U^2\bigl((1.0 - fac) * OutEq1_{n-1}\bigr) + U^2(fac * Meas_{n}) \\
& = U^2(1.0 - fac) * OutEq1_{n-1}^2 + (1.0 - fac)^2 * U^2(OutEq1_{n-1}) + U^2(fac) * Meas_{n}^2 + fac^2 * U^2(Meas_{n}) \\
& = U^2(1.0)*OutEq1_{n-1}^2 +U^2(fac)*OutEq1_{n-1}^2 + (1.0 - fac)^2 * U^2(OutEq1_{n-1}) +  U^2(fac) * Meas_{n}^2 + fac^2 * U^2(Meas_{n}) \\
& = 0 + 0 + (1.0 - fac)^2 * U^2(OutEq1_{n-1}) + 0 + fac^2 * U^2(Meas_{n}) \\
& = (1.0 - fac)^2 * U^2(OutEq1_{n-1}) + fac^2 * U^2(Meas_{n})
\end{align}$$

$$\begin{align}
U^2(OutEq1_{n}) - U^2(OutEq1_{n-1}) & = (1.0 - fac)^2 * U^2(OutEq1_{n-1}) + \cancel{fac^2 * U^2(Meas_{n})} - (1.0 - fac)^2 * U^2(OutEq1_{n-2})-\cancel{fac^2 * U^2(Meas_{n-1})} \\
& = (1.0 - fac)² * \bigl[U^2(OutEq1_{n-1}) - U^2(OutEq1_{n-2}) \bigr]
\end{align}$$


$$\frac{U^2(OutEq1_{n}) - U^2(OutEq1_{n-1})}{U^2(OutEq1_{n-1}) - U^2(OutEq1_{n-2})}={\color{LimeGreen}(1.0 - fac)² < 1.0}$$

Equation 1 du filtre passe bas
-------------------------------

Cette version de la formule du filtre passe bas à son incertitude de mesure qui diverge
$$OutEq2_{n} = OutEq2_{n-1} + fac * (Meas - OutEq2_{n-1})$$


$$\begin{align}
U^2(OutEq2_{n}) & = U^2(OutEq2_{n-1}) + U^2\bigl(fac * (Meas - OutEq2_{n-1})\bigr) \\
& = U^2(OutEq2_{n-1}) + U^2(fac) * \bigl(Meas - U^2(OutEq2_{n-1})\bigr)^2 + fac^2 * U^2(Meas - UOutEq2_{n-1}) \\
& = U^2(OutEq2_{n-1}) + fac^2 * U^2(Meas - OutEq2_{n-1}) \\
& = U^2(OutEq2_{n-1}) + fac^2 * U^2(Meas) + fac^2 * U^2(OutEq2_{n-1}) \\
& = (1.0 + fac^2) * U^2(OutEq2_{n-1}) + fac^2 * U^2(Meas)
\end{align}$$

$$\begin{align}
U²(OutEq2_{n}) - U²(OutEq2_{n-1}) & = (1.0 + fac²) * U²(OutEq2_{n-1}) - (1.0 + fac²) * U²(OutEq2_{n-2}) \\
& = (1.0 + fac²) * \bigl[U²(OutEq2_{n-1}) - U²(OutEq2_{n-2})\bigr]
\end{align}$$

$$\frac{U^2(OutEq2_{n}) - U^2(OutEq2_{n-1})}{U^2(OutEq2_{n-1}) - U^2(OutEq2_{n-2})}={\color{Salmon}(1.0 + fac^2) > 1.0}$$
