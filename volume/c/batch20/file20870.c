// fichero 20870 -- macros y constantes
#define LIMITE_20870 20970
#define FACTOR_20870 1

int aplicar_limite20870(int valor) {
    if (valor > LIMITE_20870) return LIMITE_20870;
    return valor * FACTOR_20870;
}
