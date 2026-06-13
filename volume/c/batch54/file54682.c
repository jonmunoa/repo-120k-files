// fichero 54682 -- macros y constantes
#define LIMITE_54682 54782
#define FACTOR_54682 3

int aplicar_limite54682(int valor) {
    if (valor > LIMITE_54682) return LIMITE_54682;
    return valor * FACTOR_54682;
}
