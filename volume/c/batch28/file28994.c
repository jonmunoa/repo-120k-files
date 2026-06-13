// fichero 28994 -- macros y constantes
#define LIMITE_28994 29094
#define FACTOR_28994 5

int aplicar_limite28994(int valor) {
    if (valor > LIMITE_28994) return LIMITE_28994;
    return valor * FACTOR_28994;
}
