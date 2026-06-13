// fichero 18682 -- macros y constantes
#define LIMITE_18682 18782
#define FACTOR_18682 3

int aplicar_limite18682(int valor) {
    if (valor > LIMITE_18682) return LIMITE_18682;
    return valor * FACTOR_18682;
}
