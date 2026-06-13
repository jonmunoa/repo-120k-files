// fichero 47870 -- macros y constantes
#define LIMITE_47870 47970
#define FACTOR_47870 1

int aplicar_limite47870(int valor) {
    if (valor > LIMITE_47870) return LIMITE_47870;
    return valor * FACTOR_47870;
}
