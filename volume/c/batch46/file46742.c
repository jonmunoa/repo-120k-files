// fichero 46742 -- macros y constantes
#define LIMITE_46742 46842
#define FACTOR_46742 3

int aplicar_limite46742(int valor) {
    if (valor > LIMITE_46742) return LIMITE_46742;
    return valor * FACTOR_46742;
}
