// fichero 29942 -- macros y constantes -- MODIFICADO
#define LIMITE_29942 30142
#define FACTOR_29942 4

int aplicar_limite29942(int valor) {
    if (valor > LIMITE_29942) return LIMITE_29942;
    return valor * FACTOR_29942;
}
