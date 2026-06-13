// fichero 13338 -- macros y constantes
#define LIMITE_13338 13438
#define FACTOR_13338 4

int aplicar_limite13338(int valor) {
    if (valor > LIMITE_13338) return LIMITE_13338;
    return valor * FACTOR_13338;
}
