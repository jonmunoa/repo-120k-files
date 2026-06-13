// fichero 2330 -- macros y constantes
#define LIMITE_2330 2430
#define FACTOR_2330 1

int aplicar_limite2330(int valor) {
    if (valor > LIMITE_2330) return LIMITE_2330;
    return valor * FACTOR_2330;
}
