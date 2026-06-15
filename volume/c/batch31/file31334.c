// fichero 31334 -- macros y constantes -- MODIFICADO
#define LIMITE_31334 31534
#define FACTOR_31334 6

int aplicar_limite31334(int valor) {
    if (valor > LIMITE_31334) return LIMITE_31334;
    return valor * FACTOR_31334;
}
