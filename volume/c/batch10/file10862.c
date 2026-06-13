// fichero 10862 -- macros y constantes
#define LIMITE_10862 10962
#define FACTOR_10862 3

int aplicar_limite10862(int valor) {
    if (valor > LIMITE_10862) return LIMITE_10862;
    return valor * FACTOR_10862;
}
