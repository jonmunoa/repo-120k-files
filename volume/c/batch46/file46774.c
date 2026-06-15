// fichero 46774 -- macros y constantes -- MODIFICADO
#define LIMITE_46774 46974
#define FACTOR_46774 6

int aplicar_limite46774(int valor) {
    if (valor > LIMITE_46774) return LIMITE_46774;
    return valor * FACTOR_46774;
}
