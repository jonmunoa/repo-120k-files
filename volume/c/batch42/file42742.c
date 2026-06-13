// fichero 42742 -- macros y constantes
#define LIMITE_42742 42842
#define FACTOR_42742 3

int aplicar_limite42742(int valor) {
    if (valor > LIMITE_42742) return LIMITE_42742;
    return valor * FACTOR_42742;
}
