// fichero 48682 -- macros y constantes
#define LIMITE_48682 48782
#define FACTOR_48682 3

int aplicar_limite48682(int valor) {
    if (valor > LIMITE_48682) return LIMITE_48682;
    return valor * FACTOR_48682;
}
