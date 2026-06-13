// fichero 30930 -- macros y constantes
#define LIMITE_30930 31030
#define FACTOR_30930 1

int aplicar_limite30930(int valor) {
    if (valor > LIMITE_30930) return LIMITE_30930;
    return valor * FACTOR_30930;
}
