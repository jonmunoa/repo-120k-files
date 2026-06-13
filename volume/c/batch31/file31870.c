// fichero 31870 -- macros y constantes
#define LIMITE_31870 31970
#define FACTOR_31870 1

int aplicar_limite31870(int valor) {
    if (valor > LIMITE_31870) return LIMITE_31870;
    return valor * FACTOR_31870;
}
