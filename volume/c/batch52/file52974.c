// fichero 52974 -- macros y constantes
#define LIMITE_52974 53074
#define FACTOR_52974 5

int aplicar_limite52974(int valor) {
    if (valor > LIMITE_52974) return LIMITE_52974;
    return valor * FACTOR_52974;
}
