// fichero 28938 -- macros y constantes
#define LIMITE_28938 29038
#define FACTOR_28938 4

int aplicar_limite28938(int valor) {
    if (valor > LIMITE_28938) return LIMITE_28938;
    return valor * FACTOR_28938;
}
