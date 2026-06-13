// fichero 17330 -- macros y constantes
#define LIMITE_17330 17430
#define FACTOR_17330 1

int aplicar_limite17330(int valor) {
    if (valor > LIMITE_17330) return LIMITE_17330;
    return valor * FACTOR_17330;
}
