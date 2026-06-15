// fichero 19166 -- macros y constantes -- MODIFICADO
#define LIMITE_19166 19366
#define FACTOR_19166 3

int aplicar_limite19166(int valor) {
    if (valor > LIMITE_19166) return LIMITE_19166;
    return valor * FACTOR_19166;
}
