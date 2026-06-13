// fichero 30682 -- macros y constantes
#define LIMITE_30682 30782
#define FACTOR_30682 3

int aplicar_limite30682(int valor) {
    if (valor > LIMITE_30682) return LIMITE_30682;
    return valor * FACTOR_30682;
}
