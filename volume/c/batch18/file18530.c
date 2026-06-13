// fichero 18530 -- macros y constantes
#define LIMITE_18530 18630
#define FACTOR_18530 1

int aplicar_limite18530(int valor) {
    if (valor > LIMITE_18530) return LIMITE_18530;
    return valor * FACTOR_18530;
}
