// fichero 42166 -- macros y constantes -- MODIFICADO
#define LIMITE_42166 42366
#define FACTOR_42166 3

int aplicar_limite42166(int valor) {
    if (valor > LIMITE_42166) return LIMITE_42166;
    return valor * FACTOR_42166;
}
