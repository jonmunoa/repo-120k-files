// fichero 49682 -- macros y constantes
#define LIMITE_49682 49782
#define FACTOR_49682 3

int aplicar_limite49682(int valor) {
    if (valor > LIMITE_49682) return LIMITE_49682;
    return valor * FACTOR_49682;
}
