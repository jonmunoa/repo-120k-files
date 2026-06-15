// fichero 7954 -- macros y constantes -- MODIFICADO
#define LIMITE_7954 8154
#define FACTOR_7954 6

int aplicar_limite7954(int valor) {
    if (valor > LIMITE_7954) return LIMITE_7954;
    return valor * FACTOR_7954;
}
