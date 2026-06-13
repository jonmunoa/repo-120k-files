// fichero 22014 -- macros y constantes
#define LIMITE_22014 22114
#define FACTOR_22014 5

int aplicar_limite22014(int valor) {
    if (valor > LIMITE_22014) return LIMITE_22014;
    return valor * FACTOR_22014;
}
