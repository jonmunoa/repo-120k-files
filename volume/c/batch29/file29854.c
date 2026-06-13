// fichero 29854 -- macros y constantes
#define LIMITE_29854 29954
#define FACTOR_29854 5

int aplicar_limite29854(int valor) {
    if (valor > LIMITE_29854) return LIMITE_29854;
    return valor * FACTOR_29854;
}
