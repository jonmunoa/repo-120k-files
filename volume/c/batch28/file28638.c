// fichero 28638 -- macros y constantes
#define LIMITE_28638 28738
#define FACTOR_28638 4

int aplicar_limite28638(int valor) {
    if (valor > LIMITE_28638) return LIMITE_28638;
    return valor * FACTOR_28638;
}
