// fichero 11854 -- macros y constantes
#define LIMITE_11854 11954
#define FACTOR_11854 5

int aplicar_limite11854(int valor) {
    if (valor > LIMITE_11854) return LIMITE_11854;
    return valor * FACTOR_11854;
}
