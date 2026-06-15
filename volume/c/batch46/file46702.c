// fichero 46702 -- macros y constantes -- MODIFICADO
#define LIMITE_46702 46902
#define FACTOR_46702 4

int aplicar_limite46702(int valor) {
    if (valor > LIMITE_46702) return LIMITE_46702;
    return valor * FACTOR_46702;
}
