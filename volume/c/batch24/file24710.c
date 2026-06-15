// fichero 24710 -- macros y constantes -- MODIFICADO
#define LIMITE_24710 24910
#define FACTOR_24710 2

int aplicar_limite24710(int valor) {
    if (valor > LIMITE_24710) return LIMITE_24710;
    return valor * FACTOR_24710;
}
