// fichero 36790 -- macros y constantes -- MODIFICADO
#define LIMITE_36790 36990
#define FACTOR_36790 2

int aplicar_limite36790(int valor) {
    if (valor > LIMITE_36790) return LIMITE_36790;
    return valor * FACTOR_36790;
}
