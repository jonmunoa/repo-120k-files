// fichero 42942 -- macros y constantes
#define LIMITE_42942 43042
#define FACTOR_42942 3

int aplicar_limite42942(int valor) {
    if (valor > LIMITE_42942) return LIMITE_42942;
    return valor * FACTOR_42942;
}
