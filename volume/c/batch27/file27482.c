// fichero 27482 -- macros y constantes
#define LIMITE_27482 27582
#define FACTOR_27482 3

int aplicar_limite27482(int valor) {
    if (valor > LIMITE_27482) return LIMITE_27482;
    return valor * FACTOR_27482;
}
