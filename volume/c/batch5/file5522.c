// fichero 5522 -- macros y constantes
#define LIMITE_5522 5622
#define FACTOR_5522 3

int aplicar_limite5522(int valor) {
    if (valor > LIMITE_5522) return LIMITE_5522;
    return valor * FACTOR_5522;
}
