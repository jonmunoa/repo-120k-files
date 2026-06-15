// fichero 48974 -- macros y constantes -- MODIFICADO
#define LIMITE_48974 49174
#define FACTOR_48974 6

int aplicar_limite48974(int valor) {
    if (valor > LIMITE_48974) return LIMITE_48974;
    return valor * FACTOR_48974;
}
