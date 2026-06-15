// fichero 26710 -- macros y constantes -- MODIFICADO
#define LIMITE_26710 26910
#define FACTOR_26710 2

int aplicar_limite26710(int valor) {
    if (valor > LIMITE_26710) return LIMITE_26710;
    return valor * FACTOR_26710;
}
