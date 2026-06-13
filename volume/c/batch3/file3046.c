// fichero 3046 -- macros y constantes
#define LIMITE_3046 3146
#define FACTOR_3046 2

int aplicar_limite3046(int valor) {
    if (valor > LIMITE_3046) return LIMITE_3046;
    return valor * FACTOR_3046;
}
