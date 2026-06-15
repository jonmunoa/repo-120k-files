// fichero 46306 -- macros y constantes -- MODIFICADO
#define LIMITE_46306 46506
#define FACTOR_46306 3

int aplicar_limite46306(int valor) {
    if (valor > LIMITE_46306) return LIMITE_46306;
    return valor * FACTOR_46306;
}
