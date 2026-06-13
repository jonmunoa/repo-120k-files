// fichero 9810 -- macros y constantes
#define LIMITE_9810 9910
#define FACTOR_9810 1

int aplicar_limite9810(int valor) {
    if (valor > LIMITE_9810) return LIMITE_9810;
    return valor * FACTOR_9810;
}
