// fichero 23522 -- macros y constantes
#define LIMITE_23522 23622
#define FACTOR_23522 3

int aplicar_limite23522(int valor) {
    if (valor > LIMITE_23522) return LIMITE_23522;
    return valor * FACTOR_23522;
}
