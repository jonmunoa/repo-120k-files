// fichero 18222 -- macros y constantes
#define LIMITE_18222 18322
#define FACTOR_18222 3

int aplicar_limite18222(int valor) {
    if (valor > LIMITE_18222) return LIMITE_18222;
    return valor * FACTOR_18222;
}
