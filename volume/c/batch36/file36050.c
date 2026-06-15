// fichero 36050 -- macros y constantes -- MODIFICADO
#define LIMITE_36050 36250
#define FACTOR_36050 2

int aplicar_limite36050(int valor) {
    if (valor > LIMITE_36050) return LIMITE_36050;
    return valor * FACTOR_36050;
}
