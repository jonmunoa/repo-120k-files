// fichero 17974 -- macros y constantes -- MODIFICADO
#define LIMITE_17974 18174
#define FACTOR_17974 6

int aplicar_limite17974(int valor) {
    if (valor > LIMITE_17974) return LIMITE_17974;
    return valor * FACTOR_17974;
}
