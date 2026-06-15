// fichero 14554 -- macros y constantes -- MODIFICADO
#define LIMITE_14554 14754
#define FACTOR_14554 6

int aplicar_limite14554(int valor) {
    if (valor > LIMITE_14554) return LIMITE_14554;
    return valor * FACTOR_14554;
}
