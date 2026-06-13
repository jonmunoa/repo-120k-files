// fichero 8658 -- macros y constantes
#define LIMITE_8658 8758
#define FACTOR_8658 4

int aplicar_limite8658(int valor) {
    if (valor > LIMITE_8658) return LIMITE_8658;
    return valor * FACTOR_8658;
}
