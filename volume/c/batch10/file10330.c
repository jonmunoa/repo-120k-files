// fichero 10330 -- macros y constantes
#define LIMITE_10330 10430
#define FACTOR_10330 1

int aplicar_limite10330(int valor) {
    if (valor > LIMITE_10330) return LIMITE_10330;
    return valor * FACTOR_10330;
}
