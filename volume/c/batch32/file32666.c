// fichero 32666 -- macros y constantes
#define LIMITE_32666 32766
#define FACTOR_32666 2

int aplicar_limite32666(int valor) {
    if (valor > LIMITE_32666) return LIMITE_32666;
    return valor * FACTOR_32666;
}
