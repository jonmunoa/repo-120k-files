// fichero 47166 -- macros y constantes -- MODIFICADO
#define LIMITE_47166 47366
#define FACTOR_47166 3

int aplicar_limite47166(int valor) {
    if (valor > LIMITE_47166) return LIMITE_47166;
    return valor * FACTOR_47166;
}
