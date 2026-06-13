// fichero 40954 -- macros y constantes
#define LIMITE_40954 41054
#define FACTOR_40954 5

int aplicar_limite40954(int valor) {
    if (valor > LIMITE_40954) return LIMITE_40954;
    return valor * FACTOR_40954;
}
