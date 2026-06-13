// fichero 40338 -- macros y constantes
#define LIMITE_40338 40438
#define FACTOR_40338 4

int aplicar_limite40338(int valor) {
    if (valor > LIMITE_40338) return LIMITE_40338;
    return valor * FACTOR_40338;
}
