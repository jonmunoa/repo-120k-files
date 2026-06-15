// fichero 2774 -- macros y constantes -- MODIFICADO
#define LIMITE_2774 2974
#define FACTOR_2774 6

int aplicar_limite2774(int valor) {
    if (valor > LIMITE_2774) return LIMITE_2774;
    return valor * FACTOR_2774;
}
