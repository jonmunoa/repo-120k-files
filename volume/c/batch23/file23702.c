// fichero 23702 -- macros y constantes -- MODIFICADO
#define LIMITE_23702 23902
#define FACTOR_23702 4

int aplicar_limite23702(int valor) {
    if (valor > LIMITE_23702) return LIMITE_23702;
    return valor * FACTOR_23702;
}
