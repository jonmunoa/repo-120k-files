// fichero 28854 -- macros y constantes
#define LIMITE_28854 28954
#define FACTOR_28854 5

int aplicar_limite28854(int valor) {
    if (valor > LIMITE_28854) return LIMITE_28854;
    return valor * FACTOR_28854;
}
