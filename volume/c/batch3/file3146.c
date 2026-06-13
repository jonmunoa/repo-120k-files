// fichero 3146 -- macros y constantes
#define LIMITE_3146 3246
#define FACTOR_3146 2

int aplicar_limite3146(int valor) {
    if (valor > LIMITE_3146) return LIMITE_3146;
    return valor * FACTOR_3146;
}
