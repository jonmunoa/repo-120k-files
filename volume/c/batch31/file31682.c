// fichero 31682 -- macros y constantes
#define LIMITE_31682 31782
#define FACTOR_31682 3

int aplicar_limite31682(int valor) {
    if (valor > LIMITE_31682) return LIMITE_31682;
    return valor * FACTOR_31682;
}
