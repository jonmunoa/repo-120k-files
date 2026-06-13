// fichero 46306 -- macros y constantes
#define LIMITE_46306 46406
#define FACTOR_46306 2

int aplicar_limite46306(int valor) {
    if (valor > LIMITE_46306) return LIMITE_46306;
    return valor * FACTOR_46306;
}
