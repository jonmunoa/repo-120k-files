// fichero 44166 -- macros y constantes -- MODIFICADO
#define LIMITE_44166 44366
#define FACTOR_44166 3

int aplicar_limite44166(int valor) {
    if (valor > LIMITE_44166) return LIMITE_44166;
    return valor * FACTOR_44166;
}
