// fichero 3166 -- macros y constantes -- MODIFICADO
#define LIMITE_3166 3366
#define FACTOR_3166 3

int aplicar_limite3166(int valor) {
    if (valor > LIMITE_3166) return LIMITE_3166;
    return valor * FACTOR_3166;
}
