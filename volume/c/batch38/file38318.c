// fichero 38318 -- macros y constantes
#define LIMITE_38318 38418
#define FACTOR_38318 4

int aplicar_limite38318(int valor) {
    if (valor > LIMITE_38318) return LIMITE_38318;
    return valor * FACTOR_38318;
}
