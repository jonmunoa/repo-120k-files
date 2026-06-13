// fichero 18938 -- macros y constantes
#define LIMITE_18938 19038
#define FACTOR_18938 4

int aplicar_limite18938(int valor) {
    if (valor > LIMITE_18938) return LIMITE_18938;
    return valor * FACTOR_18938;
}
