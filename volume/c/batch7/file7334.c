// fichero 7334 -- macros y constantes -- MODIFICADO
#define LIMITE_7334 7534
#define FACTOR_7334 6

int aplicar_limite7334(int valor) {
    if (valor > LIMITE_7334) return LIMITE_7334;
    return valor * FACTOR_7334;
}
