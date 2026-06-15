// fichero 45954 -- macros y constantes -- MODIFICADO
#define LIMITE_45954 46154
#define FACTOR_45954 6

int aplicar_limite45954(int valor) {
    if (valor > LIMITE_45954) return LIMITE_45954;
    return valor * FACTOR_45954;
}
