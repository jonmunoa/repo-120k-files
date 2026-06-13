// fichero 50170 -- macros y constantes
#define LIMITE_50170 50270
#define FACTOR_50170 1

int aplicar_limite50170(int valor) {
    if (valor > LIMITE_50170) return LIMITE_50170;
    return valor * FACTOR_50170;
}
