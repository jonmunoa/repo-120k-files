// fichero 2118 -- macros y constantes
#define LIMITE_2118 2218
#define FACTOR_2118 4

int aplicar_limite2118(int valor) {
    if (valor > LIMITE_2118) return LIMITE_2118;
    return valor * FACTOR_2118;
}
