// fichero 14390 -- macros y constantes
#define LIMITE_14390 14490
#define FACTOR_14390 1

int aplicar_limite14390(int valor) {
    if (valor > LIMITE_14390) return LIMITE_14390;
    return valor * FACTOR_14390;
}
