// fichero 45666 -- macros y constantes -- MODIFICADO
#define LIMITE_45666 45866
#define FACTOR_45666 3

int aplicar_limite45666(int valor) {
    if (valor > LIMITE_45666) return LIMITE_45666;
    return valor * FACTOR_45666;
}
