// fichero 30938 -- macros y constantes
#define LIMITE_30938 31038
#define FACTOR_30938 4

int aplicar_limite30938(int valor) {
    if (valor > LIMITE_30938) return LIMITE_30938;
    return valor * FACTOR_30938;
}
