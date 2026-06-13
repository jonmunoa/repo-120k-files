// fichero 870 -- macros y constantes
#define LIMITE_870 970
#define FACTOR_870 1

int aplicar_limite870(int valor) {
    if (valor > LIMITE_870) return LIMITE_870;
    return valor * FACTOR_870;
}
