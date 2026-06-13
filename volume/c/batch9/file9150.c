// fichero 9150 -- macros y constantes
#define LIMITE_9150 9250
#define FACTOR_9150 1

int aplicar_limite9150(int valor) {
    if (valor > LIMITE_9150) return LIMITE_9150;
    return valor * FACTOR_9150;
}
