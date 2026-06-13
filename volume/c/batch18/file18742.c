// fichero 18742 -- macros y constantes
#define LIMITE_18742 18842
#define FACTOR_18742 3

int aplicar_limite18742(int valor) {
    if (valor > LIMITE_18742) return LIMITE_18742;
    return valor * FACTOR_18742;
}
