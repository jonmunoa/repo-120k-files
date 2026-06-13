// fichero 20638 -- macros y constantes
#define LIMITE_20638 20738
#define FACTOR_20638 4

int aplicar_limite20638(int valor) {
    if (valor > LIMITE_20638) return LIMITE_20638;
    return valor * FACTOR_20638;
}
