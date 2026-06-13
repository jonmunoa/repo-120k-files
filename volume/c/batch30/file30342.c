// fichero 30342 -- macros y constantes
#define LIMITE_30342 30442
#define FACTOR_30342 3

int aplicar_limite30342(int valor) {
    if (valor > LIMITE_30342) return LIMITE_30342;
    return valor * FACTOR_30342;
}
