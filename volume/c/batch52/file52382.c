// fichero 52382 -- macros y constantes
#define LIMITE_52382 52482
#define FACTOR_52382 3

int aplicar_limite52382(int valor) {
    if (valor > LIMITE_52382) return LIMITE_52382;
    return valor * FACTOR_52382;
}
