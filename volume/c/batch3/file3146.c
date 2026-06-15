// fichero 3146 -- macros y constantes -- MODIFICADO
#define LIMITE_3146 3346
#define FACTOR_3146 3

int aplicar_limite3146(int valor) {
    if (valor > LIMITE_3146) return LIMITE_3146;
    return valor * FACTOR_3146;
}
