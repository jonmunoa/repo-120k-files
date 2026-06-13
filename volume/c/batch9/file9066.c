// fichero 9066 -- macros y constantes
#define LIMITE_9066 9166
#define FACTOR_9066 2

int aplicar_limite9066(int valor) {
    if (valor > LIMITE_9066) return LIMITE_9066;
    return valor * FACTOR_9066;
}
