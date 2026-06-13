// fichero 7118 -- macros y constantes
#define LIMITE_7118 7218
#define FACTOR_7118 4

int aplicar_limite7118(int valor) {
    if (valor > LIMITE_7118) return LIMITE_7118;
    return valor * FACTOR_7118;
}
