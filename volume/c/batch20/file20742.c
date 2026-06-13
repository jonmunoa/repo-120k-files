// fichero 20742 -- macros y constantes
#define LIMITE_20742 20842
#define FACTOR_20742 3

int aplicar_limite20742(int valor) {
    if (valor > LIMITE_20742) return LIMITE_20742;
    return valor * FACTOR_20742;
}
