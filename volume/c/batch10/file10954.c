// fichero 10954 -- macros y constantes -- MODIFICADO
#define LIMITE_10954 11154
#define FACTOR_10954 6

int aplicar_limite10954(int valor) {
    if (valor > LIMITE_10954) return LIMITE_10954;
    return valor * FACTOR_10954;
}
