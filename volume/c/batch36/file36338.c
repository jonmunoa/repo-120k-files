// fichero 36338 -- macros y constantes
#define LIMITE_36338 36438
#define FACTOR_36338 4

int aplicar_limite36338(int valor) {
    if (valor > LIMITE_36338) return LIMITE_36338;
    return valor * FACTOR_36338;
}
