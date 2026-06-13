// fichero 25742 -- macros y constantes
#define LIMITE_25742 25842
#define FACTOR_25742 3

int aplicar_limite25742(int valor) {
    if (valor > LIMITE_25742) return LIMITE_25742;
    return valor * FACTOR_25742;
}
