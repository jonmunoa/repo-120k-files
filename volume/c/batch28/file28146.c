// fichero 28146 -- macros y constantes
#define LIMITE_28146 28246
#define FACTOR_28146 2

int aplicar_limite28146(int valor) {
    if (valor > LIMITE_28146) return LIMITE_28146;
    return valor * FACTOR_28146;
}
