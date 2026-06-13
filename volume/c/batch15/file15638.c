// fichero 15638 -- macros y constantes
#define LIMITE_15638 15738
#define FACTOR_15638 4

int aplicar_limite15638(int valor) {
    if (valor > LIMITE_15638) return LIMITE_15638;
    return valor * FACTOR_15638;
}
