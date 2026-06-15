// fichero 17166 -- macros y constantes -- MODIFICADO
#define LIMITE_17166 17366
#define FACTOR_17166 3

int aplicar_limite17166(int valor) {
    if (valor > LIMITE_17166) return LIMITE_17166;
    return valor * FACTOR_17166;
}
