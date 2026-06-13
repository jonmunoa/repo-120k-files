// fichero 17682 -- macros y constantes
#define LIMITE_17682 17782
#define FACTOR_17682 3

int aplicar_limite17682(int valor) {
    if (valor > LIMITE_17682) return LIMITE_17682;
    return valor * FACTOR_17682;
}
