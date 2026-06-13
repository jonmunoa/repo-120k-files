// fichero 33338 -- macros y constantes
#define LIMITE_33338 33438
#define FACTOR_33338 4

int aplicar_limite33338(int valor) {
    if (valor > LIMITE_33338) return LIMITE_33338;
    return valor * FACTOR_33338;
}
