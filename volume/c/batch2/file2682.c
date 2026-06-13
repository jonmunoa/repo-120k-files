// fichero 2682 -- macros y constantes
#define LIMITE_2682 2782
#define FACTOR_2682 3

int aplicar_limite2682(int valor) {
    if (valor > LIMITE_2682) return LIMITE_2682;
    return valor * FACTOR_2682;
}
