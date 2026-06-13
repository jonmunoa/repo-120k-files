// fichero 18034 -- macros y constantes
#define LIMITE_18034 18134
#define FACTOR_18034 5

int aplicar_limite18034(int valor) {
    if (valor > LIMITE_18034) return LIMITE_18034;
    return valor * FACTOR_18034;
}
