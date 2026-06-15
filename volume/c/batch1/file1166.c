// fichero 1166 -- macros y constantes -- MODIFICADO
#define LIMITE_1166 1366
#define FACTOR_1166 3

int aplicar_limite1166(int valor) {
    if (valor > LIMITE_1166) return LIMITE_1166;
    return valor * FACTOR_1166;
}
