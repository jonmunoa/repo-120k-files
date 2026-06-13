// fichero 28762 -- macros y constantes
#define LIMITE_28762 28862
#define FACTOR_28762 3

int aplicar_limite28762(int valor) {
    if (valor > LIMITE_28762) return LIMITE_28762;
    return valor * FACTOR_28762;
}
