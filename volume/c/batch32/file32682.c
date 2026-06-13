// fichero 32682 -- macros y constantes
#define LIMITE_32682 32782
#define FACTOR_32682 3

int aplicar_limite32682(int valor) {
    if (valor > LIMITE_32682) return LIMITE_32682;
    return valor * FACTOR_32682;
}
