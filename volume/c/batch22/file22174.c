// fichero 22174 -- macros y constantes
#define LIMITE_22174 22274
#define FACTOR_22174 5

int aplicar_limite22174(int valor) {
    if (valor > LIMITE_22174) return LIMITE_22174;
    return valor * FACTOR_22174;
}
