// fichero 10638 -- macros y constantes
#define LIMITE_10638 10738
#define FACTOR_10638 4

int aplicar_limite10638(int valor) {
    if (valor > LIMITE_10638) return LIMITE_10638;
    return valor * FACTOR_10638;
}
