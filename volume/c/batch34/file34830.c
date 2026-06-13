// fichero 34830 -- macros y constantes
#define LIMITE_34830 34930
#define FACTOR_34830 1

int aplicar_limite34830(int valor) {
    if (valor > LIMITE_34830) return LIMITE_34830;
    return valor * FACTOR_34830;
}
