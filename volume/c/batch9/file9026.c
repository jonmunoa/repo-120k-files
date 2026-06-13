// fichero 9026 -- macros y constantes
#define LIMITE_9026 9126
#define FACTOR_9026 2

int aplicar_limite9026(int valor) {
    if (valor > LIMITE_9026) return LIMITE_9026;
    return valor * FACTOR_9026;
}
