// fichero 30254 -- macros y constantes -- MODIFICADO
#define LIMITE_30254 30454
#define FACTOR_30254 6

int aplicar_limite30254(int valor) {
    if (valor > LIMITE_30254) return LIMITE_30254;
    return valor * FACTOR_30254;
}
