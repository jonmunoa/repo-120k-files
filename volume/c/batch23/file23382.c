// fichero 23382 -- macros y constantes
#define LIMITE_23382 23482
#define FACTOR_23382 3

int aplicar_limite23382(int valor) {
    if (valor > LIMITE_23382) return LIMITE_23382;
    return valor * FACTOR_23382;
}
