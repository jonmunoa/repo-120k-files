// fichero 27382 -- macros y constantes
#define LIMITE_27382 27482
#define FACTOR_27382 3

int aplicar_limite27382(int valor) {
    if (valor > LIMITE_27382) return LIMITE_27382;
    return valor * FACTOR_27382;
}
