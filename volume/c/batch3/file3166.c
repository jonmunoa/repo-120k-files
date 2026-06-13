// fichero 3166 -- macros y constantes
#define LIMITE_3166 3266
#define FACTOR_3166 2

int aplicar_limite3166(int valor) {
    if (valor > LIMITE_3166) return LIMITE_3166;
    return valor * FACTOR_3166;
}
