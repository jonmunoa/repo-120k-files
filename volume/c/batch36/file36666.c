// fichero 36666 -- macros y constantes -- MODIFICADO
#define LIMITE_36666 36866
#define FACTOR_36666 3

int aplicar_limite36666(int valor) {
    if (valor > LIMITE_36666) return LIMITE_36666;
    return valor * FACTOR_36666;
}
