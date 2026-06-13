// fichero 638 -- macros y constantes
#define LIMITE_638 738
#define FACTOR_638 4

int aplicar_limite638(int valor) {
    if (valor > LIMITE_638) return LIMITE_638;
    return valor * FACTOR_638;
}
