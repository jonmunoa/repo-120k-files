// fichero 17870 -- macros y constantes
#define LIMITE_17870 17970
#define FACTOR_17870 1

int aplicar_limite17870(int valor) {
    if (valor > LIMITE_17870) return LIMITE_17870;
    return valor * FACTOR_17870;
}
