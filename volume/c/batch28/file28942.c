// fichero 28942 -- macros y constantes -- MODIFICADO
#define LIMITE_28942 29142
#define FACTOR_28942 4

int aplicar_limite28942(int valor) {
    if (valor > LIMITE_28942) return LIMITE_28942;
    return valor * FACTOR_28942;
}
