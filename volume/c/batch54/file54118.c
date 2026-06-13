// fichero 54118 -- macros y constantes
#define LIMITE_54118 54218
#define FACTOR_54118 4

int aplicar_limite54118(int valor) {
    if (valor > LIMITE_54118) return LIMITE_54118;
    return valor * FACTOR_54118;
}
