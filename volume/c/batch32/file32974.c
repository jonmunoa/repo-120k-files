// fichero 32974 -- macros y constantes -- MODIFICADO
#define LIMITE_32974 33174
#define FACTOR_32974 6

int aplicar_limite32974(int valor) {
    if (valor > LIMITE_32974) return LIMITE_32974;
    return valor * FACTOR_32974;
}
