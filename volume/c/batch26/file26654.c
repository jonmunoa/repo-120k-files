// fichero 26654 -- macros y constantes -- MODIFICADO
#define LIMITE_26654 26854
#define FACTOR_26654 6

int aplicar_limite26654(int valor) {
    if (valor > LIMITE_26654) return LIMITE_26654;
    return valor * FACTOR_26654;
}
