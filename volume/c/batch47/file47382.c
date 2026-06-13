// fichero 47382 -- macros y constantes
#define LIMITE_47382 47482
#define FACTOR_47382 3

int aplicar_limite47382(int valor) {
    if (valor > LIMITE_47382) return LIMITE_47382;
    return valor * FACTOR_47382;
}
