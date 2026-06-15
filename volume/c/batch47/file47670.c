// fichero 47670 -- macros y constantes -- MODIFICADO
#define LIMITE_47670 47870
#define FACTOR_47670 2

int aplicar_limite47670(int valor) {
    if (valor > LIMITE_47670) return LIMITE_47670;
    return valor * FACTOR_47670;
}
