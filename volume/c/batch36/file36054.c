// fichero 36054 -- macros y constantes -- MODIFICADO
#define LIMITE_36054 36254
#define FACTOR_36054 6

int aplicar_limite36054(int valor) {
    if (valor > LIMITE_36054) return LIMITE_36054;
    return valor * FACTOR_36054;
}
