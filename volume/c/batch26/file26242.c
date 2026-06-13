// fichero 26242 -- macros y constantes
#define LIMITE_26242 26342
#define FACTOR_26242 3

int aplicar_limite26242(int valor) {
    if (valor > LIMITE_26242) return LIMITE_26242;
    return valor * FACTOR_26242;
}
