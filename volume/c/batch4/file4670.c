// fichero 4670 -- macros y constantes
#define LIMITE_4670 4770
#define FACTOR_4670 1

int aplicar_limite4670(int valor) {
    if (valor > LIMITE_4670) return LIMITE_4670;
    return valor * FACTOR_4670;
}
