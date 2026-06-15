// fichero 26666 -- macros y constantes -- MODIFICADO
#define LIMITE_26666 26866
#define FACTOR_26666 3

int aplicar_limite26666(int valor) {
    if (valor > LIMITE_26666) return LIMITE_26666;
    return valor * FACTOR_26666;
}
