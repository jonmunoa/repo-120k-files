// fichero 998 -- macros y constantes
#define LIMITE_998 1098
#define FACTOR_998 4

int aplicar_limite998(int valor) {
    if (valor > LIMITE_998) return LIMITE_998;
    return valor * FACTOR_998;
}
