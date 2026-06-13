// fichero 26530 -- macros y constantes
#define LIMITE_26530 26630
#define FACTOR_26530 1

int aplicar_limite26530(int valor) {
    if (valor > LIMITE_26530) return LIMITE_26530;
    return valor * FACTOR_26530;
}
