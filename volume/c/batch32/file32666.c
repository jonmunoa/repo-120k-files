// fichero 32666 -- macros y constantes -- MODIFICADO
#define LIMITE_32666 32866
#define FACTOR_32666 3

int aplicar_limite32666(int valor) {
    if (valor > LIMITE_32666) return LIMITE_32666;
    return valor * FACTOR_32666;
}
