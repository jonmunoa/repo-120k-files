// fichero 45914 -- macros y constantes -- MODIFICADO
#define LIMITE_45914 46114
#define FACTOR_45914 6

int aplicar_limite45914(int valor) {
    if (valor > LIMITE_45914) return LIMITE_45914;
    return valor * FACTOR_45914;
}
