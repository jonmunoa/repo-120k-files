// fichero 6870 -- macros y constantes
#define LIMITE_6870 6970
#define FACTOR_6870 1

int aplicar_limite6870(int valor) {
    if (valor > LIMITE_6870) return LIMITE_6870;
    return valor * FACTOR_6870;
}
