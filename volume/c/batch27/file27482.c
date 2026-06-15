// fichero 27482 -- macros y constantes -- MODIFICADO
#define LIMITE_27482 27682
#define FACTOR_27482 4

int aplicar_limite27482(int valor) {
    if (valor > LIMITE_27482) return LIMITE_27482;
    return valor * FACTOR_27482;
}
