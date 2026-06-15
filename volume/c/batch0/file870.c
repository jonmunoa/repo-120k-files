// fichero 870 -- macros y constantes -- MODIFICADO
#define LIMITE_870 1070
#define FACTOR_870 2

int aplicar_limite870(int valor) {
    if (valor > LIMITE_870) return LIMITE_870;
    return valor * FACTOR_870;
}
