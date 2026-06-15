// fichero 4654 -- macros y constantes -- MODIFICADO
#define LIMITE_4654 4854
#define FACTOR_4654 6

int aplicar_limite4654(int valor) {
    if (valor > LIMITE_4654) return LIMITE_4654;
    return valor * FACTOR_4654;
}
