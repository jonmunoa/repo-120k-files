// fichero 9878 -- macros y constantes
#define LIMITE_9878 9978
#define FACTOR_9878 4

int aplicar_limite9878(int valor) {
    if (valor > LIMITE_9878) return LIMITE_9878;
    return valor * FACTOR_9878;
}
