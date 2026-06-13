// fichero 16682 -- macros y constantes
#define LIMITE_16682 16782
#define FACTOR_16682 3

int aplicar_limite16682(int valor) {
    if (valor > LIMITE_16682) return LIMITE_16682;
    return valor * FACTOR_16682;
}
