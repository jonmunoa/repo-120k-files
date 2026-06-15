// fichero 47870 -- macros y constantes -- MODIFICADO
#define LIMITE_47870 48070
#define FACTOR_47870 2

int aplicar_limite47870(int valor) {
    if (valor > LIMITE_47870) return LIMITE_47870;
    return valor * FACTOR_47870;
}
