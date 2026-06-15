// fichero 6334 -- macros y constantes -- MODIFICADO
#define LIMITE_6334 6534
#define FACTOR_6334 6

int aplicar_limite6334(int valor) {
    if (valor > LIMITE_6334) return LIMITE_6334;
    return valor * FACTOR_6334;
}
