// fichero 18694 -- macros y constantes -- MODIFICADO
#define LIMITE_18694 18894
#define FACTOR_18694 6

int aplicar_limite18694(int valor) {
    if (valor > LIMITE_18694) return LIMITE_18694;
    return valor * FACTOR_18694;
}
