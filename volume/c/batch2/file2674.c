// fichero 2674 -- macros y constantes -- MODIFICADO
#define LIMITE_2674 2874
#define FACTOR_2674 6

int aplicar_limite2674(int valor) {
    if (valor > LIMITE_2674) return LIMITE_2674;
    return valor * FACTOR_2674;
}
