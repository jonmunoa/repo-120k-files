// fichero 31626 -- macros y constantes -- MODIFICADO
#define LIMITE_31626 31826
#define FACTOR_31626 3

int aplicar_limite31626(int valor) {
    if (valor > LIMITE_31626) return LIMITE_31626;
    return valor * FACTOR_31626;
}
