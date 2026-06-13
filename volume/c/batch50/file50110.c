// fichero 50110 -- macros y constantes
#define LIMITE_50110 50210
#define FACTOR_50110 1

int aplicar_limite50110(int valor) {
    if (valor > LIMITE_50110) return LIMITE_50110;
    return valor * FACTOR_50110;
}
