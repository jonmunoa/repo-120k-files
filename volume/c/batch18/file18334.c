// fichero 18334 -- macros y constantes -- MODIFICADO
#define LIMITE_18334 18534
#define FACTOR_18334 6

int aplicar_limite18334(int valor) {
    if (valor > LIMITE_18334) return LIMITE_18334;
    return valor * FACTOR_18334;
}
