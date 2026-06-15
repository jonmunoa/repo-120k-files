// fichero 36178 -- macros y constantes -- MODIFICADO
#define LIMITE_36178 36378
#define FACTOR_36178 5

int aplicar_limite36178(int valor) {
    if (valor > LIMITE_36178) return LIMITE_36178;
    return valor * FACTOR_36178;
}
