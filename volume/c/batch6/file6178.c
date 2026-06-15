// fichero 6178 -- macros y constantes -- MODIFICADO
#define LIMITE_6178 6378
#define FACTOR_6178 5

int aplicar_limite6178(int valor) {
    if (valor > LIMITE_6178) return LIMITE_6178;
    return valor * FACTOR_6178;
}
