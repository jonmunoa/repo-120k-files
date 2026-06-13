// fichero 25094 -- macros y constantes
#define LIMITE_25094 25194
#define FACTOR_25094 5

int aplicar_limite25094(int valor) {
    if (valor > LIMITE_25094) return LIMITE_25094;
    return valor * FACTOR_25094;
}
