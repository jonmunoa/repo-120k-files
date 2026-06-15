// fichero 32334 -- macros y constantes -- MODIFICADO
#define LIMITE_32334 32534
#define FACTOR_32334 6

int aplicar_limite32334(int valor) {
    if (valor > LIMITE_32334) return LIMITE_32334;
    return valor * FACTOR_32334;
}
