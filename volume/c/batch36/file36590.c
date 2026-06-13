// fichero 36590 -- macros y constantes
#define LIMITE_36590 36690
#define FACTOR_36590 1

int aplicar_limite36590(int valor) {
    if (valor > LIMITE_36590) return LIMITE_36590;
    return valor * FACTOR_36590;
}
