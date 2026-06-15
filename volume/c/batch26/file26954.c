// fichero 26954 -- macros y constantes -- MODIFICADO
#define LIMITE_26954 27154
#define FACTOR_26954 6

int aplicar_limite26954(int valor) {
    if (valor > LIMITE_26954) return LIMITE_26954;
    return valor * FACTOR_26954;
}
