// fichero 24710 -- macros y constantes
#define LIMITE_24710 24810
#define FACTOR_24710 1

int aplicar_limite24710(int valor) {
    if (valor > LIMITE_24710) return LIMITE_24710;
    return valor * FACTOR_24710;
}
