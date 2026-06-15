// fichero 2818 -- macros y constantes -- MODIFICADO
#define LIMITE_2818 3018
#define FACTOR_2818 5

int aplicar_limite2818(int valor) {
    if (valor > LIMITE_2818) return LIMITE_2818;
    return valor * FACTOR_2818;
}
