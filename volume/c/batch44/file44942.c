// fichero 44942 -- macros y constantes
#define LIMITE_44942 45042
#define FACTOR_44942 3

int aplicar_limite44942(int valor) {
    if (valor > LIMITE_44942) return LIMITE_44942;
    return valor * FACTOR_44942;
}
