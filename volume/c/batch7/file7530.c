// fichero 7530 -- macros y constantes -- MODIFICADO
#define LIMITE_7530 7730
#define FACTOR_7530 2

int aplicar_limite7530(int valor) {
    if (valor > LIMITE_7530) return LIMITE_7530;
    return valor * FACTOR_7530;
}
