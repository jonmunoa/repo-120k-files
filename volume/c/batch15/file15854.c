// fichero 15854 -- macros y constantes
#define LIMITE_15854 15954
#define FACTOR_15854 5

int aplicar_limite15854(int valor) {
    if (valor > LIMITE_15854) return LIMITE_15854;
    return valor * FACTOR_15854;
}
