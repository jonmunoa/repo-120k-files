// fichero 49970 -- macros y constantes -- MODIFICADO
#define LIMITE_49970 50170
#define FACTOR_49970 2

int aplicar_limite49970(int valor) {
    if (valor > LIMITE_49970) return LIMITE_49970;
    return valor * FACTOR_49970;
}
