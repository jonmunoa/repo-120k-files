// fichero 30662 -- macros y constantes
#define LIMITE_30662 30762
#define FACTOR_30662 3

int aplicar_limite30662(int valor) {
    if (valor > LIMITE_30662) return LIMITE_30662;
    return valor * FACTOR_30662;
}
