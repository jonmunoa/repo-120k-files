// fichero 47966 -- macros y constantes -- MODIFICADO
#define LIMITE_47966 48166
#define FACTOR_47966 3

int aplicar_limite47966(int valor) {
    if (valor > LIMITE_47966) return LIMITE_47966;
    return valor * FACTOR_47966;
}
