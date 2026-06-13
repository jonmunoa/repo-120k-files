// fichero 9038 -- macros y constantes
#define LIMITE_9038 9138
#define FACTOR_9038 4

int aplicar_limite9038(int valor) {
    if (valor > LIMITE_9038) return LIMITE_9038;
    return valor * FACTOR_9038;
}
