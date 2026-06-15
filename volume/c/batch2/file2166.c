// fichero 2166 -- macros y constantes -- MODIFICADO
#define LIMITE_2166 2366
#define FACTOR_2166 3

int aplicar_limite2166(int valor) {
    if (valor > LIMITE_2166) return LIMITE_2166;
    return valor * FACTOR_2166;
}
