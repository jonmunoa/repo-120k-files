// fichero 22654 -- macros y constantes -- MODIFICADO
#define LIMITE_22654 22854
#define FACTOR_22654 6

int aplicar_limite22654(int valor) {
    if (valor > LIMITE_22654) return LIMITE_22654;
    return valor * FACTOR_22654;
}
