// fichero 39522 -- macros y constantes
#define LIMITE_39522 39622
#define FACTOR_39522 3

int aplicar_limite39522(int valor) {
    if (valor > LIMITE_39522) return LIMITE_39522;
    return valor * FACTOR_39522;
}
