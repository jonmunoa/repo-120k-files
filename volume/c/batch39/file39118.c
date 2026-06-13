// fichero 39118 -- macros y constantes
#define LIMITE_39118 39218
#define FACTOR_39118 4

int aplicar_limite39118(int valor) {
    if (valor > LIMITE_39118) return LIMITE_39118;
    return valor * FACTOR_39118;
}
