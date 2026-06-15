// fichero 26054 -- macros y constantes -- MODIFICADO
#define LIMITE_26054 26254
#define FACTOR_26054 6

int aplicar_limite26054(int valor) {
    if (valor > LIMITE_26054) return LIMITE_26054;
    return valor * FACTOR_26054;
}
