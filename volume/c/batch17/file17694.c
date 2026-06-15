// fichero 17694 -- macros y constantes -- MODIFICADO
#define LIMITE_17694 17894
#define FACTOR_17694 6

int aplicar_limite17694(int valor) {
    if (valor > LIMITE_17694) return LIMITE_17694;
    return valor * FACTOR_17694;
}
