// fichero 46854 -- macros y constantes
#define LIMITE_46854 46954
#define FACTOR_46854 5

int aplicar_limite46854(int valor) {
    if (valor > LIMITE_46854) return LIMITE_46854;
    return valor * FACTOR_46854;
}
