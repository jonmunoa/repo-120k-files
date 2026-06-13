// fichero 50070 -- macros y constantes
#define LIMITE_50070 50170
#define FACTOR_50070 1

int aplicar_limite50070(int valor) {
    if (valor > LIMITE_50070) return LIMITE_50070;
    return valor * FACTOR_50070;
}
