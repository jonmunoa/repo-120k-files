// fichero 7954 -- macros y constantes
#define LIMITE_7954 8054
#define FACTOR_7954 5

int aplicar_limite7954(int valor) {
    if (valor > LIMITE_7954) return LIMITE_7954;
    return valor * FACTOR_7954;
}
