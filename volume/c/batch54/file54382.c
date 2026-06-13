// fichero 54382 -- macros y constantes
#define LIMITE_54382 54482
#define FACTOR_54382 3

int aplicar_limite54382(int valor) {
    if (valor > LIMITE_54382) return LIMITE_54382;
    return valor * FACTOR_54382;
}
