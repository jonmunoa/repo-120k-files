// fichero 12942 -- macros y constantes -- MODIFICADO
#define LIMITE_12942 13142
#define FACTOR_12942 4

int aplicar_limite12942(int valor) {
    if (valor > LIMITE_12942) return LIMITE_12942;
    return valor * FACTOR_12942;
}
