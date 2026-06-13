// fichero 8854 -- macros y constantes
#define LIMITE_8854 8954
#define FACTOR_8854 5

int aplicar_limite8854(int valor) {
    if (valor > LIMITE_8854) return LIMITE_8854;
    return valor * FACTOR_8854;
}
