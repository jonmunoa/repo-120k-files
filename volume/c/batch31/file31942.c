// fichero 31942 -- macros y constantes -- MODIFICADO
#define LIMITE_31942 32142
#define FACTOR_31942 4

int aplicar_limite31942(int valor) {
    if (valor > LIMITE_31942) return LIMITE_31942;
    return valor * FACTOR_31942;
}
