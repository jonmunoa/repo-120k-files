// fichero 30958 -- macros y constantes
#define LIMITE_30958 31058
#define FACTOR_30958 4

int aplicar_limite30958(int valor) {
    if (valor > LIMITE_30958) return LIMITE_30958;
    return valor * FACTOR_30958;
}
