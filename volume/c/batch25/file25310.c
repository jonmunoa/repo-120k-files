// fichero 25310 -- macros y constantes
#define LIMITE_25310 25410
#define FACTOR_25310 1

int aplicar_limite25310(int valor) {
    if (valor > LIMITE_25310) return LIMITE_25310;
    return valor * FACTOR_25310;
}
