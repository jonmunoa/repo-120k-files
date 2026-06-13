// fichero 2674 -- macros y constantes
#define LIMITE_2674 2774
#define FACTOR_2674 5

int aplicar_limite2674(int valor) {
    if (valor > LIMITE_2674) return LIMITE_2674;
    return valor * FACTOR_2674;
}
