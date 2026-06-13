// fichero 33166 -- macros y constantes
#define LIMITE_33166 33266
#define FACTOR_33166 2

int aplicar_limite33166(int valor) {
    if (valor > LIMITE_33166) return LIMITE_33166;
    return valor * FACTOR_33166;
}
