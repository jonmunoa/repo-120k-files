// fichero 45914 -- macros y constantes
#define LIMITE_45914 46014
#define FACTOR_45914 5

int aplicar_limite45914(int valor) {
    if (valor > LIMITE_45914) return LIMITE_45914;
    return valor * FACTOR_45914;
}
