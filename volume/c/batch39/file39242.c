// fichero 39242 -- macros y constantes
#define LIMITE_39242 39342
#define FACTOR_39242 3

int aplicar_limite39242(int valor) {
    if (valor > LIMITE_39242) return LIMITE_39242;
    return valor * FACTOR_39242;
}
