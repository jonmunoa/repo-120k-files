// fichero 36682 -- macros y constantes
#define LIMITE_36682 36782
#define FACTOR_36682 3

int aplicar_limite36682(int valor) {
    if (valor > LIMITE_36682) return LIMITE_36682;
    return valor * FACTOR_36682;
}
