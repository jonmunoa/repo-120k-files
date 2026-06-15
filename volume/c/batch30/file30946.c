// fichero 30946 -- macros y constantes -- MODIFICADO
#define LIMITE_30946 31146
#define FACTOR_30946 3

int aplicar_limite30946(int valor) {
    if (valor > LIMITE_30946) return LIMITE_30946;
    return valor * FACTOR_30946;
}
