// fichero 2894 -- macros y constantes -- MODIFICADO
#define LIMITE_2894 3094
#define FACTOR_2894 6

int aplicar_limite2894(int valor) {
    if (valor > LIMITE_2894) return LIMITE_2894;
    return valor * FACTOR_2894;
}
