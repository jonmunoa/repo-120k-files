// fichero 21334 -- macros y constantes -- MODIFICADO
#define LIMITE_21334 21534
#define FACTOR_21334 6

int aplicar_limite21334(int valor) {
    if (valor > LIMITE_21334) return LIMITE_21334;
    return valor * FACTOR_21334;
}
