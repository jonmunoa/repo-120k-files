// fichero 31834 -- macros y constantes
#define LIMITE_31834 31934
#define FACTOR_31834 5

int aplicar_limite31834(int valor) {
    if (valor > LIMITE_31834) return LIMITE_31834;
    return valor * FACTOR_31834;
}
