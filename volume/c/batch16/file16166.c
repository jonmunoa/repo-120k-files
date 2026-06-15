// fichero 16166 -- macros y constantes -- MODIFICADO
#define LIMITE_16166 16366
#define FACTOR_16166 3

int aplicar_limite16166(int valor) {
    if (valor > LIMITE_16166) return LIMITE_16166;
    return valor * FACTOR_16166;
}
