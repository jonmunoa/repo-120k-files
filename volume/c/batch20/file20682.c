// fichero 20682 -- macros y constantes
#define LIMITE_20682 20782
#define FACTOR_20682 3

int aplicar_limite20682(int valor) {
    if (valor > LIMITE_20682) return LIMITE_20682;
    return valor * FACTOR_20682;
}
