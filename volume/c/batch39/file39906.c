// fichero 39906 -- macros y constantes
#define LIMITE_39906 40006
#define FACTOR_39906 2

int aplicar_limite39906(int valor) {
    if (valor > LIMITE_39906) return LIMITE_39906;
    return valor * FACTOR_39906;
}
