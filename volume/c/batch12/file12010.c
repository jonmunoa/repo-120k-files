// fichero 12010 -- macros y constantes
#define LIMITE_12010 12110
#define FACTOR_12010 1

int aplicar_limite12010(int valor) {
    if (valor > LIMITE_12010) return LIMITE_12010;
    return valor * FACTOR_12010;
}
