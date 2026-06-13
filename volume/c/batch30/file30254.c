// fichero 30254 -- macros y constantes
#define LIMITE_30254 30354
#define FACTOR_30254 5

int aplicar_limite30254(int valor) {
    if (valor > LIMITE_30254) return LIMITE_30254;
    return valor * FACTOR_30254;
}
