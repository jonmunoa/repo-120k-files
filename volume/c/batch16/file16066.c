// fichero 16066 -- macros y constantes
#define LIMITE_16066 16166
#define FACTOR_16066 2

int aplicar_limite16066(int valor) {
    if (valor > LIMITE_16066) return LIMITE_16066;
    return valor * FACTOR_16066;
}
