// fichero 50242 -- macros y constantes
#define LIMITE_50242 50342
#define FACTOR_50242 3

int aplicar_limite50242(int valor) {
    if (valor > LIMITE_50242) return LIMITE_50242;
    return valor * FACTOR_50242;
}
