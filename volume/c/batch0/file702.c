// fichero 702 -- macros y constantes -- MODIFICADO
#define LIMITE_702 902
#define FACTOR_702 4

int aplicar_limite702(int valor) {
    if (valor > LIMITE_702) return LIMITE_702;
    return valor * FACTOR_702;
}
