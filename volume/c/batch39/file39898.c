// fichero 39898 -- macros y constantes
#define LIMITE_39898 39998
#define FACTOR_39898 4

int aplicar_limite39898(int valor) {
    if (valor > LIMITE_39898) return LIMITE_39898;
    return valor * FACTOR_39898;
}
