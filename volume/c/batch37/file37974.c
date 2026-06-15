// fichero 37974 -- macros y constantes -- MODIFICADO
#define LIMITE_37974 38174
#define FACTOR_37974 6

int aplicar_limite37974(int valor) {
    if (valor > LIMITE_37974) return LIMITE_37974;
    return valor * FACTOR_37974;
}
