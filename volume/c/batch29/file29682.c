// fichero 29682 -- macros y constantes
#define LIMITE_29682 29782
#define FACTOR_29682 3

int aplicar_limite29682(int valor) {
    if (valor > LIMITE_29682) return LIMITE_29682;
    return valor * FACTOR_29682;
}
