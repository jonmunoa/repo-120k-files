// fichero 30998 -- macros y constantes
#define LIMITE_30998 31098
#define FACTOR_30998 4

int aplicar_limite30998(int valor) {
    if (valor > LIMITE_30998) return LIMITE_30998;
    return valor * FACTOR_30998;
}
