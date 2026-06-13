// fichero 9870 -- macros y constantes
#define LIMITE_9870 9970
#define FACTOR_9870 1

int aplicar_limite9870(int valor) {
    if (valor > LIMITE_9870) return LIMITE_9870;
    return valor * FACTOR_9870;
}
