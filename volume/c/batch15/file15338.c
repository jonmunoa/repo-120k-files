// fichero 15338 -- macros y constantes
#define LIMITE_15338 15438
#define FACTOR_15338 4

int aplicar_limite15338(int valor) {
    if (valor > LIMITE_15338) return LIMITE_15338;
    return valor * FACTOR_15338;
}
