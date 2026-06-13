// fichero 14118 -- macros y constantes
#define LIMITE_14118 14218
#define FACTOR_14118 4

int aplicar_limite14118(int valor) {
    if (valor > LIMITE_14118) return LIMITE_14118;
    return valor * FACTOR_14118;
}
