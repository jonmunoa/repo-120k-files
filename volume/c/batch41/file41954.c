// fichero 41954 -- macros y constantes
#define LIMITE_41954 42054
#define FACTOR_41954 5

int aplicar_limite41954(int valor) {
    if (valor > LIMITE_41954) return LIMITE_41954;
    return valor * FACTOR_41954;
}
