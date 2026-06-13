// fichero 31166 -- macros y constantes
#define LIMITE_31166 31266
#define FACTOR_31166 2

int aplicar_limite31166(int valor) {
    if (valor > LIMITE_31166) return LIMITE_31166;
    return valor * FACTOR_31166;
}
