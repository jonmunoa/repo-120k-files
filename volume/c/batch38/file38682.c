// fichero 38682 -- macros y constantes
#define LIMITE_38682 38782
#define FACTOR_38682 3

int aplicar_limite38682(int valor) {
    if (valor > LIMITE_38682) return LIMITE_38682;
    return valor * FACTOR_38682;
}
