// fichero 48942 -- macros y constantes
#define LIMITE_48942 49042
#define FACTOR_48942 3

int aplicar_limite48942(int valor) {
    if (valor > LIMITE_48942) return LIMITE_48942;
    return valor * FACTOR_48942;
}
