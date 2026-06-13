// fichero 1010 -- macros y constantes
#define LIMITE_1010 1110
#define FACTOR_1010 1

int aplicar_limite1010(int valor) {
    if (valor > LIMITE_1010) return LIMITE_1010;
    return valor * FACTOR_1010;
}
