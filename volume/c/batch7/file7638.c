// fichero 7638 -- macros y constantes
#define LIMITE_7638 7738
#define FACTOR_7638 4

int aplicar_limite7638(int valor) {
    if (valor > LIMITE_7638) return LIMITE_7638;
    return valor * FACTOR_7638;
}
