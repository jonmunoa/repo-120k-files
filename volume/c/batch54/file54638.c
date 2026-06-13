// fichero 54638 -- macros y constantes
#define LIMITE_54638 54738
#define FACTOR_54638 4

int aplicar_limite54638(int valor) {
    if (valor > LIMITE_54638) return LIMITE_54638;
    return valor * FACTOR_54638;
}
