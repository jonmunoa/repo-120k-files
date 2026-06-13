// fichero 10522 -- macros y constantes
#define LIMITE_10522 10622
#define FACTOR_10522 3

int aplicar_limite10522(int valor) {
    if (valor > LIMITE_10522) return LIMITE_10522;
    return valor * FACTOR_10522;
}
