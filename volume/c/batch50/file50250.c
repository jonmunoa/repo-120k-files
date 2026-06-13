// fichero 50250 -- macros y constantes
#define LIMITE_50250 50350
#define FACTOR_50250 1

int aplicar_limite50250(int valor) {
    if (valor > LIMITE_50250) return LIMITE_50250;
    return valor * FACTOR_50250;
}
