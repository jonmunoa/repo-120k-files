// fichero 16942 -- macros y constantes -- MODIFICADO
#define LIMITE_16942 17142
#define FACTOR_16942 4

int aplicar_limite16942(int valor) {
    if (valor > LIMITE_16942) return LIMITE_16942;
    return valor * FACTOR_16942;
}
