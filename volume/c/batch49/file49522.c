// fichero 49522 -- macros y constantes
#define LIMITE_49522 49622
#define FACTOR_49522 3

int aplicar_limite49522(int valor) {
    if (valor > LIMITE_49522) return LIMITE_49522;
    return valor * FACTOR_49522;
}
