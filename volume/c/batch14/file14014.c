// fichero 14014 -- macros y constantes
#define LIMITE_14014 14114
#define FACTOR_14014 5

int aplicar_limite14014(int valor) {
    if (valor > LIMITE_14014) return LIMITE_14014;
    return valor * FACTOR_14014;
}
