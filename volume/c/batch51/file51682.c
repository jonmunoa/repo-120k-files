// fichero 51682 -- macros y constantes
#define LIMITE_51682 51782
#define FACTOR_51682 3

int aplicar_limite51682(int valor) {
    if (valor > LIMITE_51682) return LIMITE_51682;
    return valor * FACTOR_51682;
}
