// fichero 25242 -- macros y constantes
#define LIMITE_25242 25342
#define FACTOR_25242 3

int aplicar_limite25242(int valor) {
    if (valor > LIMITE_25242) return LIMITE_25242;
    return valor * FACTOR_25242;
}
