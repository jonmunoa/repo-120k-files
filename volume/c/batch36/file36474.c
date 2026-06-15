// fichero 36474 -- macros y constantes -- MODIFICADO
#define LIMITE_36474 36674
#define FACTOR_36474 6

int aplicar_limite36474(int valor) {
    if (valor > LIMITE_36474) return LIMITE_36474;
    return valor * FACTOR_36474;
}
