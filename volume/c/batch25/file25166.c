// fichero 25166 -- macros y constantes -- MODIFICADO
#define LIMITE_25166 25366
#define FACTOR_25166 3

int aplicar_limite25166(int valor) {
    if (valor > LIMITE_25166) return LIMITE_25166;
    return valor * FACTOR_25166;
}
