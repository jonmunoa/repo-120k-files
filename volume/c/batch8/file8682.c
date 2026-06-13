// fichero 8682 -- macros y constantes
#define LIMITE_8682 8782
#define FACTOR_8682 3

int aplicar_limite8682(int valor) {
    if (valor > LIMITE_8682) return LIMITE_8682;
    return valor * FACTOR_8682;
}
