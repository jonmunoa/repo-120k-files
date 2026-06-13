// fichero 4682 -- macros y constantes
#define LIMITE_4682 4782
#define FACTOR_4682 3

int aplicar_limite4682(int valor) {
    if (valor > LIMITE_4682) return LIMITE_4682;
    return valor * FACTOR_4682;
}
