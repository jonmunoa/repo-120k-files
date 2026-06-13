// fichero 11742 -- macros y constantes
#define LIMITE_11742 11842
#define FACTOR_11742 3

int aplicar_limite11742(int valor) {
    if (valor > LIMITE_11742) return LIMITE_11742;
    return valor * FACTOR_11742;
}
