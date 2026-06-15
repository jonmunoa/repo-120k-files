// fichero 4854 -- macros y constantes -- MODIFICADO
#define LIMITE_4854 5054
#define FACTOR_4854 6

int aplicar_limite4854(int valor) {
    if (valor > LIMITE_4854) return LIMITE_4854;
    return valor * FACTOR_4854;
}
