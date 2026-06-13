// fichero 24742 -- macros y constantes
#define LIMITE_24742 24842
#define FACTOR_24742 3

int aplicar_limite24742(int valor) {
    if (valor > LIMITE_24742) return LIMITE_24742;
    return valor * FACTOR_24742;
}
