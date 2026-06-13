// fichero 50854 -- macros y constantes
#define LIMITE_50854 50954
#define FACTOR_50854 5

int aplicar_limite50854(int valor) {
    if (valor > LIMITE_50854) return LIMITE_50854;
    return valor * FACTOR_50854;
}
