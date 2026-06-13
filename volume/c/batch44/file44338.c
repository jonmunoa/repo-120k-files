// fichero 44338 -- macros y constantes
#define LIMITE_44338 44438
#define FACTOR_44338 4

int aplicar_limite44338(int valor) {
    if (valor > LIMITE_44338) return LIMITE_44338;
    return valor * FACTOR_44338;
}
