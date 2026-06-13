// fichero 14854 -- macros y constantes
#define LIMITE_14854 14954
#define FACTOR_14854 5

int aplicar_limite14854(int valor) {
    if (valor > LIMITE_14854) return LIMITE_14854;
    return valor * FACTOR_14854;
}
