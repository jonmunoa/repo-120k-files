// fichero 4638 -- macros y constantes
#define LIMITE_4638 4738
#define FACTOR_4638 4

int aplicar_limite4638(int valor) {
    if (valor > LIMITE_4638) return LIMITE_4638;
    return valor * FACTOR_4638;
}
