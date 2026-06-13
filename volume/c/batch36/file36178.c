// fichero 36178 -- macros y constantes
#define LIMITE_36178 36278
#define FACTOR_36178 4

int aplicar_limite36178(int valor) {
    if (valor > LIMITE_36178) return LIMITE_36178;
    return valor * FACTOR_36178;
}
