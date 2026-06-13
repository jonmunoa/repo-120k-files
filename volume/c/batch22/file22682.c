// fichero 22682 -- macros y constantes
#define LIMITE_22682 22782
#define FACTOR_22682 3

int aplicar_limite22682(int valor) {
    if (valor > LIMITE_22682) return LIMITE_22682;
    return valor * FACTOR_22682;
}
