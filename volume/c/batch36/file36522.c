// fichero 36522 -- macros y constantes
#define LIMITE_36522 36622
#define FACTOR_36522 3

int aplicar_limite36522(int valor) {
    if (valor > LIMITE_36522) return LIMITE_36522;
    return valor * FACTOR_36522;
}
