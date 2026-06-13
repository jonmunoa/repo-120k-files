// fichero 12682 -- macros y constantes
#define LIMITE_12682 12782
#define FACTOR_12682 3

int aplicar_limite12682(int valor) {
    if (valor > LIMITE_12682) return LIMITE_12682;
    return valor * FACTOR_12682;
}
