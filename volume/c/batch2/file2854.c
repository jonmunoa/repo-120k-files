// fichero 2854 -- macros y constantes -- MODIFICADO
#define LIMITE_2854 3054
#define FACTOR_2854 6

int aplicar_limite2854(int valor) {
    if (valor > LIMITE_2854) return LIMITE_2854;
    return valor * FACTOR_2854;
}
