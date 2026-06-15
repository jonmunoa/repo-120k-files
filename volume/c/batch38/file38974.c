// fichero 38974 -- macros y constantes -- MODIFICADO
#define LIMITE_38974 39174
#define FACTOR_38974 6

int aplicar_limite38974(int valor) {
    if (valor > LIMITE_38974) return LIMITE_38974;
    return valor * FACTOR_38974;
}
