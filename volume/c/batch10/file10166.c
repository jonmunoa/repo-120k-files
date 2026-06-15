// fichero 10166 -- macros y constantes -- MODIFICADO
#define LIMITE_10166 10366
#define FACTOR_10166 3

int aplicar_limite10166(int valor) {
    if (valor > LIMITE_10166) return LIMITE_10166;
    return valor * FACTOR_10166;
}
