// fichero 7854 -- macros y constantes
#define LIMITE_7854 7954
#define FACTOR_7854 5

int aplicar_limite7854(int valor) {
    if (valor > LIMITE_7854) return LIMITE_7854;
    return valor * FACTOR_7854;
}
