// fichero 36590 -- macros y constantes -- MODIFICADO
#define LIMITE_36590 36790
#define FACTOR_36590 2

int aplicar_limite36590(int valor) {
    if (valor > LIMITE_36590) return LIMITE_36590;
    return valor * FACTOR_36590;
}
