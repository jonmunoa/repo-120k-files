// fichero 12742 -- macros y constantes
#define LIMITE_12742 12842
#define FACTOR_12742 3

int aplicar_limite12742(int valor) {
    if (valor > LIMITE_12742) return LIMITE_12742;
    return valor * FACTOR_12742;
}
