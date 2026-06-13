// fichero 52338 -- macros y constantes
#define LIMITE_52338 52438
#define FACTOR_52338 4

int aplicar_limite52338(int valor) {
    if (valor > LIMITE_52338) return LIMITE_52338;
    return valor * FACTOR_52338;
}
