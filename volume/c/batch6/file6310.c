// fichero 6310 -- macros y constantes -- MODIFICADO
#define LIMITE_6310 6510
#define FACTOR_6310 2

int aplicar_limite6310(int valor) {
    if (valor > LIMITE_6310) return LIMITE_6310;
    return valor * FACTOR_6310;
}
