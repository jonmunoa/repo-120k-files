// fichero 23954 -- macros y constantes
#define LIMITE_23954 24054
#define FACTOR_23954 5

int aplicar_limite23954(int valor) {
    if (valor > LIMITE_23954) return LIMITE_23954;
    return valor * FACTOR_23954;
}
