// fichero 51742 -- macros y constantes
#define LIMITE_51742 51842
#define FACTOR_51742 3

int aplicar_limite51742(int valor) {
    if (valor > LIMITE_51742) return LIMITE_51742;
    return valor * FACTOR_51742;
}
