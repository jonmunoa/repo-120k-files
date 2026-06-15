// fichero 18178 -- macros y constantes -- MODIFICADO
#define LIMITE_18178 18378
#define FACTOR_18178 5

int aplicar_limite18178(int valor) {
    if (valor > LIMITE_18178) return LIMITE_18178;
    return valor * FACTOR_18178;
}
