// fichero 28334 -- macros y constantes -- MODIFICADO
#define LIMITE_28334 28534
#define FACTOR_28334 6

int aplicar_limite28334(int valor) {
    if (valor > LIMITE_28334) return LIMITE_28334;
    return valor * FACTOR_28334;
}
