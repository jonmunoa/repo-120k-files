// fichero 44682 -- macros y constantes
#define LIMITE_44682 44782
#define FACTOR_44682 3

int aplicar_limite44682(int valor) {
    if (valor > LIMITE_44682) return LIMITE_44682;
    return valor * FACTOR_44682;
}
