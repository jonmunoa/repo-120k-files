// fichero 26450 -- macros y constantes
#define LIMITE_26450 26550
#define FACTOR_26450 1

int aplicar_limite26450(int valor) {
    if (valor > LIMITE_26450) return LIMITE_26450;
    return valor * FACTOR_26450;
}
