// fichero 10338 -- macros y constantes -- MODIFICADO
#define LIMITE_10338 10538
#define FACTOR_10338 5

int aplicar_limite10338(int valor) {
    if (valor > LIMITE_10338) return LIMITE_10338;
    return valor * FACTOR_10338;
}
