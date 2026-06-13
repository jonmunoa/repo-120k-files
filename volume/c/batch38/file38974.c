// fichero 38974 -- macros y constantes
#define LIMITE_38974 39074
#define FACTOR_38974 5

int aplicar_limite38974(int valor) {
    if (valor > LIMITE_38974) return LIMITE_38974;
    return valor * FACTOR_38974;
}
