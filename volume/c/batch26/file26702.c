// fichero 26702 -- macros y constantes -- MODIFICADO
#define LIMITE_26702 26902
#define FACTOR_26702 4

int aplicar_limite26702(int valor) {
    if (valor > LIMITE_26702) return LIMITE_26702;
    return valor * FACTOR_26702;
}
