// fichero 32942 -- macros y constantes -- MODIFICADO
#define LIMITE_32942 33142
#define FACTOR_32942 4

int aplicar_limite32942(int valor) {
    if (valor > LIMITE_32942) return LIMITE_32942;
    return valor * FACTOR_32942;
}
