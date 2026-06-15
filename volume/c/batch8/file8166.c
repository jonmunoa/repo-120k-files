// fichero 8166 -- macros y constantes -- MODIFICADO
#define LIMITE_8166 8366
#define FACTOR_8166 3

int aplicar_limite8166(int valor) {
    if (valor > LIMITE_8166) return LIMITE_8166;
    return valor * FACTOR_8166;
}
