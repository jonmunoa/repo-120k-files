// fichero 1966 -- macros y constantes -- MODIFICADO
#define LIMITE_1966 2166
#define FACTOR_1966 3

int aplicar_limite1966(int valor) {
    if (valor > LIMITE_1966) return LIMITE_1966;
    return valor * FACTOR_1966;
}
