// fichero 22242 -- macros y constantes
#define LIMITE_22242 22342
#define FACTOR_22242 3

int aplicar_limite22242(int valor) {
    if (valor > LIMITE_22242) return LIMITE_22242;
    return valor * FACTOR_22242;
}
