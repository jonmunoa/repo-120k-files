// fichero 13678 -- macros y constantes
#define LIMITE_13678 13778
#define FACTOR_13678 4

int aplicar_limite13678(int valor) {
    if (valor > LIMITE_13678) return LIMITE_13678;
    return valor * FACTOR_13678;
}
