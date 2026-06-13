// fichero 37862 -- macros y constantes
#define LIMITE_37862 37962
#define FACTOR_37862 3

int aplicar_limite37862(int valor) {
    if (valor > LIMITE_37862) return LIMITE_37862;
    return valor * FACTOR_37862;
}
