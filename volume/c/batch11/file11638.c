// fichero 11638 -- macros y constantes
#define LIMITE_11638 11738
#define FACTOR_11638 4

int aplicar_limite11638(int valor) {
    if (valor > LIMITE_11638) return LIMITE_11638;
    return valor * FACTOR_11638;
}
