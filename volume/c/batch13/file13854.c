// fichero 13854 -- macros y constantes
#define LIMITE_13854 13954
#define FACTOR_13854 5

int aplicar_limite13854(int valor) {
    if (valor > LIMITE_13854) return LIMITE_13854;
    return valor * FACTOR_13854;
}
