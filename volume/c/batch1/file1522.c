// fichero 1522 -- macros y constantes
#define LIMITE_1522 1622
#define FACTOR_1522 3

int aplicar_limite1522(int valor) {
    if (valor > LIMITE_1522) return LIMITE_1522;
    return valor * FACTOR_1522;
}
