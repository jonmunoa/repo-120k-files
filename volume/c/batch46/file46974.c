// fichero 46974 -- macros y constantes
#define LIMITE_46974 47074
#define FACTOR_46974 5

int aplicar_limite46974(int valor) {
    if (valor > LIMITE_46974) return LIMITE_46974;
    return valor * FACTOR_46974;
}
