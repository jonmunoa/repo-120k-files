// fichero 24054 -- macros y constantes
#define LIMITE_24054 24154
#define FACTOR_24054 5

int aplicar_limite24054(int valor) {
    if (valor > LIMITE_24054) return LIMITE_24054;
    return valor * FACTOR_24054;
}
