// fichero 3382 -- macros y constantes
#define LIMITE_3382 3482
#define FACTOR_3382 3

int aplicar_limite3382(int valor) {
    if (valor > LIMITE_3382) return LIMITE_3382;
    return valor * FACTOR_3382;
}
