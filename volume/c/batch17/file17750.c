// fichero 17750 -- macros y constantes
#define LIMITE_17750 17850
#define FACTOR_17750 1

int aplicar_limite17750(int valor) {
    if (valor > LIMITE_17750) return LIMITE_17750;
    return valor * FACTOR_17750;
}
