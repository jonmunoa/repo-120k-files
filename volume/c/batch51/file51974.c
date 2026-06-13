// fichero 51974 -- macros y constantes
#define LIMITE_51974 52074
#define FACTOR_51974 5

int aplicar_limite51974(int valor) {
    if (valor > LIMITE_51974) return LIMITE_51974;
    return valor * FACTOR_51974;
}
