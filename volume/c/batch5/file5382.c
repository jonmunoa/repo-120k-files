// fichero 5382 -- macros y constantes
#define LIMITE_5382 5482
#define FACTOR_5382 3

int aplicar_limite5382(int valor) {
    if (valor > LIMITE_5382) return LIMITE_5382;
    return valor * FACTOR_5382;
}
