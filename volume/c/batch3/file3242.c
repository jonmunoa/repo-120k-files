// fichero 3242 -- macros y constantes
#define LIMITE_3242 3342
#define FACTOR_3242 3

int aplicar_limite3242(int valor) {
    if (valor > LIMITE_3242) return LIMITE_3242;
    return valor * FACTOR_3242;
}
