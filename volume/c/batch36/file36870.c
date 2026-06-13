// fichero 36870 -- macros y constantes
#define LIMITE_36870 36970
#define FACTOR_36870 1

int aplicar_limite36870(int valor) {
    if (valor > LIMITE_36870) return LIMITE_36870;
    return valor * FACTOR_36870;
}
