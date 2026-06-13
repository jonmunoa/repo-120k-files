// fichero 30742 -- macros y constantes
#define LIMITE_30742 30842
#define FACTOR_30742 3

int aplicar_limite30742(int valor) {
    if (valor > LIMITE_30742) return LIMITE_30742;
    return valor * FACTOR_30742;
}
