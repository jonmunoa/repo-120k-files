// fichero 24014 -- macros y constantes
#define LIMITE_24014 24114
#define FACTOR_24014 5

int aplicar_limite24014(int valor) {
    if (valor > LIMITE_24014) return LIMITE_24014;
    return valor * FACTOR_24014;
}
