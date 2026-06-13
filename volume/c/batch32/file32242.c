// fichero 32242 -- macros y constantes
#define LIMITE_32242 32342
#define FACTOR_32242 3

int aplicar_limite32242(int valor) {
    if (valor > LIMITE_32242) return LIMITE_32242;
    return valor * FACTOR_32242;
}
