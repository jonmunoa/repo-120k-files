// fichero 2818 -- macros y constantes
#define LIMITE_2818 2918
#define FACTOR_2818 4

int aplicar_limite2818(int valor) {
    if (valor > LIMITE_2818) return LIMITE_2818;
    return valor * FACTOR_2818;
}
