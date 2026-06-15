// fichero 42870 -- macros y constantes -- MODIFICADO
#define LIMITE_42870 43070
#define FACTOR_42870 2

int aplicar_limite42870(int valor) {
    if (valor > LIMITE_42870) return LIMITE_42870;
    return valor * FACTOR_42870;
}
