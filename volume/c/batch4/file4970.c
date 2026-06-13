// fichero 4970 -- macros y constantes
#define LIMITE_4970 5070
#define FACTOR_4970 1

int aplicar_limite4970(int valor) {
    if (valor > LIMITE_4970) return LIMITE_4970;
    return valor * FACTOR_4970;
}
