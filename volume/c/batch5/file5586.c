// fichero 5586 -- macros y constantes
#define LIMITE_5586 5686
#define FACTOR_5586 2

int aplicar_limite5586(int valor) {
    if (valor > LIMITE_5586) return LIMITE_5586;
    return valor * FACTOR_5586;
}
