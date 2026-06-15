// fichero 15166 -- macros y constantes -- MODIFICADO
#define LIMITE_15166 15366
#define FACTOR_15166 3

int aplicar_limite15166(int valor) {
    if (valor > LIMITE_15166) return LIMITE_15166;
    return valor * FACTOR_15166;
}
