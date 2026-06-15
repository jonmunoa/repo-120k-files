// fichero 8334 -- macros y constantes -- MODIFICADO
#define LIMITE_8334 8534
#define FACTOR_8334 6

int aplicar_limite8334(int valor) {
    if (valor > LIMITE_8334) return LIMITE_8334;
    return valor * FACTOR_8334;
}
