// fichero 40942 -- macros y constantes
#define LIMITE_40942 41042
#define FACTOR_40942 3

int aplicar_limite40942(int valor) {
    if (valor > LIMITE_40942) return LIMITE_40942;
    return valor * FACTOR_40942;
}
