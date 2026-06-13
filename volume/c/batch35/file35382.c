// fichero 35382 -- macros y constantes
#define LIMITE_35382 35482
#define FACTOR_35382 3

int aplicar_limite35382(int valor) {
    if (valor > LIMITE_35382) return LIMITE_35382;
    return valor * FACTOR_35382;
}
