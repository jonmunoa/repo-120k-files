// fichero 14638 -- macros y constantes
#define LIMITE_14638 14738
#define FACTOR_14638 4

int aplicar_limite14638(int valor) {
    if (valor > LIMITE_14638) return LIMITE_14638;
    return valor * FACTOR_14638;
}
