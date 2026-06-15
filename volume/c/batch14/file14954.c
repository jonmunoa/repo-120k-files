// fichero 14954 -- macros y constantes -- MODIFICADO
#define LIMITE_14954 15154
#define FACTOR_14954 6

int aplicar_limite14954(int valor) {
    if (valor > LIMITE_14954) return LIMITE_14954;
    return valor * FACTOR_14954;
}
