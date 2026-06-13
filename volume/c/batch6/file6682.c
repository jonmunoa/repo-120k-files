// fichero 6682 -- macros y constantes
#define LIMITE_6682 6782
#define FACTOR_6682 3

int aplicar_limite6682(int valor) {
    if (valor > LIMITE_6682) return LIMITE_6682;
    return valor * FACTOR_6682;
}
