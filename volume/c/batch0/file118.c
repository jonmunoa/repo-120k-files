// fichero 118 -- macros y constantes
#define LIMITE_118 218
#define FACTOR_118 4

int aplicar_limite118(int valor) {
    if (valor > LIMITE_118) return LIMITE_118;
    return valor * FACTOR_118;
}
