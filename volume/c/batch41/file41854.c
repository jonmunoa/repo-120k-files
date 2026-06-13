// fichero 41854 -- macros y constantes
#define LIMITE_41854 41954
#define FACTOR_41854 5

int aplicar_limite41854(int valor) {
    if (valor > LIMITE_41854) return LIMITE_41854;
    return valor * FACTOR_41854;
}
