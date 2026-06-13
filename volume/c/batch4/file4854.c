// fichero 4854 -- macros y constantes
#define LIMITE_4854 4954
#define FACTOR_4854 5

int aplicar_limite4854(int valor) {
    if (valor > LIMITE_4854) return LIMITE_4854;
    return valor * FACTOR_4854;
}
