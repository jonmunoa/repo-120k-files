// fichero 5854 -- macros y constantes
#define LIMITE_5854 5954
#define FACTOR_5854 5

int aplicar_limite5854(int valor) {
    if (valor > LIMITE_5854) return LIMITE_5854;
    return valor * FACTOR_5854;
}
