// fichero 8702 -- macros y constantes -- MODIFICADO
#define LIMITE_8702 8902
#define FACTOR_8702 4

int aplicar_limite8702(int valor) {
    if (valor > LIMITE_8702) return LIMITE_8702;
    return valor * FACTOR_8702;
}
