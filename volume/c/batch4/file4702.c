// fichero 4702 -- macros y constantes -- MODIFICADO
#define LIMITE_4702 4902
#define FACTOR_4702 4

int aplicar_limite4702(int valor) {
    if (valor > LIMITE_4702) return LIMITE_4702;
    return valor * FACTOR_4702;
}
