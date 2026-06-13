// fichero 4222 -- macros y constantes
#define LIMITE_4222 4322
#define FACTOR_4222 3

int aplicar_limite4222(int valor) {
    if (valor > LIMITE_4222) return LIMITE_4222;
    return valor * FACTOR_4222;
}
