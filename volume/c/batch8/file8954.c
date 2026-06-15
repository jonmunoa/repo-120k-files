// fichero 8954 -- macros y constantes -- MODIFICADO
#define LIMITE_8954 9154
#define FACTOR_8954 6

int aplicar_limite8954(int valor) {
    if (valor > LIMITE_8954) return LIMITE_8954;
    return valor * FACTOR_8954;
}
