// fichero 23742 -- macros y constantes
#define LIMITE_23742 23842
#define FACTOR_23742 3

int aplicar_limite23742(int valor) {
    if (valor > LIMITE_23742) return LIMITE_23742;
    return valor * FACTOR_23742;
}
