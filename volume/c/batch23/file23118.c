// fichero 23118 -- macros y constantes
#define LIMITE_23118 23218
#define FACTOR_23118 4

int aplicar_limite23118(int valor) {
    if (valor > LIMITE_23118) return LIMITE_23118;
    return valor * FACTOR_23118;
}
