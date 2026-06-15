// fichero 1430 -- macros y constantes -- MODIFICADO
#define LIMITE_1430 1630
#define FACTOR_1430 2

int aplicar_limite1430(int valor) {
    if (valor > LIMITE_1430) return LIMITE_1430;
    return valor * FACTOR_1430;
}
