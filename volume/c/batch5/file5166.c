// fichero 5166 -- macros y constantes -- MODIFICADO
#define LIMITE_5166 5366
#define FACTOR_5166 3

int aplicar_limite5166(int valor) {
    if (valor > LIMITE_5166) return LIMITE_5166;
    return valor * FACTOR_5166;
}
