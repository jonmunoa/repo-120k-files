// fichero 10666 -- macros y constantes -- MODIFICADO
#define LIMITE_10666 10866
#define FACTOR_10666 3

int aplicar_limite10666(int valor) {
    if (valor > LIMITE_10666) return LIMITE_10666;
    return valor * FACTOR_10666;
}
