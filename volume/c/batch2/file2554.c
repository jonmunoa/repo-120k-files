// fichero 2554 -- macros y constantes -- MODIFICADO
#define LIMITE_2554 2754
#define FACTOR_2554 6

int aplicar_limite2554(int valor) {
    if (valor > LIMITE_2554) return LIMITE_2554;
    return valor * FACTOR_2554;
}
