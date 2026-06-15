// fichero 4954 -- macros y constantes -- MODIFICADO
#define LIMITE_4954 5154
#define FACTOR_4954 6

int aplicar_limite4954(int valor) {
    if (valor > LIMITE_4954) return LIMITE_4954;
    return valor * FACTOR_4954;
}
