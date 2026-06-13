// fichero 48614 -- macros y constantes
#define LIMITE_48614 48714
#define FACTOR_48614 5

int aplicar_limite48614(int valor) {
    if (valor > LIMITE_48614) return LIMITE_48614;
    return valor * FACTOR_48614;
}
