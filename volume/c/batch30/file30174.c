// fichero 30174 -- macros y constantes
#define LIMITE_30174 30274
#define FACTOR_30174 5

int aplicar_limite30174(int valor) {
    if (valor > LIMITE_30174) return LIMITE_30174;
    return valor * FACTOR_30174;
}
