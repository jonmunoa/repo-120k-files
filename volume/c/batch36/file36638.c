// fichero 36638 -- macros y constantes
#define LIMITE_36638 36738
#define FACTOR_36638 4

int aplicar_limite36638(int valor) {
    if (valor > LIMITE_36638) return LIMITE_36638;
    return valor * FACTOR_36638;
}
