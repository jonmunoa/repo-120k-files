// fichero 4446 -- macros y constantes
#define LIMITE_4446 4546
#define FACTOR_4446 2

int aplicar_limite4446(int valor) {
    if (valor > LIMITE_4446) return LIMITE_4446;
    return valor * FACTOR_4446;
}
