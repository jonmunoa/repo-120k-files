// fichero 45166 -- macros y constantes -- MODIFICADO
#define LIMITE_45166 45366
#define FACTOR_45166 3

int aplicar_limite45166(int valor) {
    if (valor > LIMITE_45166) return LIMITE_45166;
    return valor * FACTOR_45166;
}
