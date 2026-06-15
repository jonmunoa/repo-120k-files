// fichero 28166 -- macros y constantes -- MODIFICADO
#define LIMITE_28166 28366
#define FACTOR_28166 3

int aplicar_limite28166(int valor) {
    if (valor > LIMITE_28166) return LIMITE_28166;
    return valor * FACTOR_28166;
}
