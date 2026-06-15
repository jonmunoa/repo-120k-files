// fichero 31166 -- macros y constantes -- MODIFICADO
#define LIMITE_31166 31366
#define FACTOR_31166 3

int aplicar_limite31166(int valor) {
    if (valor > LIMITE_31166) return LIMITE_31166;
    return valor * FACTOR_31166;
}
