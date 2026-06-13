// fichero 9626 -- macros y constantes
#define LIMITE_9626 9726
#define FACTOR_9626 2

int aplicar_limite9626(int valor) {
    if (valor > LIMITE_9626) return LIMITE_9626;
    return valor * FACTOR_9626;
}
