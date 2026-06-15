// fichero 38942 -- macros y constantes -- MODIFICADO
#define LIMITE_38942 39142
#define FACTOR_38942 4

int aplicar_limite38942(int valor) {
    if (valor > LIMITE_38942) return LIMITE_38942;
    return valor * FACTOR_38942;
}
