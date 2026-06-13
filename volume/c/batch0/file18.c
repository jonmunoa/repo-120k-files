// fichero 18 -- macros y constantes
#define LIMITE_18 118
#define FACTOR_18 4

int aplicar_limite18(int valor) {
    if (valor > LIMITE_18) return LIMITE_18;
    return valor * FACTOR_18;
}
