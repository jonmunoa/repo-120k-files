// fichero 14702 -- macros y constantes -- MODIFICADO
#define LIMITE_14702 14902
#define FACTOR_14702 4

int aplicar_limite14702(int valor) {
    if (valor > LIMITE_14702) return LIMITE_14702;
    return valor * FACTOR_14702;
}
