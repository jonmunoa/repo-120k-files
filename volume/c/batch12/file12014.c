// fichero 12014 -- macros y constantes
#define LIMITE_12014 12114
#define FACTOR_12014 5

int aplicar_limite12014(int valor) {
    if (valor > LIMITE_12014) return LIMITE_12014;
    return valor * FACTOR_12014;
}
