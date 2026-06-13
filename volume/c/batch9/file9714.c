// fichero 9714 -- macros y constantes
#define LIMITE_9714 9814
#define FACTOR_9714 5

int aplicar_limite9714(int valor) {
    if (valor > LIMITE_9714) return LIMITE_9714;
    return valor * FACTOR_9714;
}
