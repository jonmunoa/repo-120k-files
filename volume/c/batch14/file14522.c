// fichero 14522 -- macros y constantes
#define LIMITE_14522 14622
#define FACTOR_14522 3

int aplicar_limite14522(int valor) {
    if (valor > LIMITE_14522) return LIMITE_14522;
    return valor * FACTOR_14522;
}
