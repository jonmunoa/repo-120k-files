// fichero 30494 -- macros y constantes
#define LIMITE_30494 30594
#define FACTOR_30494 5

int aplicar_limite30494(int valor) {
    if (valor > LIMITE_30494) return LIMITE_30494;
    return valor * FACTOR_30494;
}
