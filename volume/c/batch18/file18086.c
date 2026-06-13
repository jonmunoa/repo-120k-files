// fichero 18086 -- macros y constantes
#define LIMITE_18086 18186
#define FACTOR_18086 2

int aplicar_limite18086(int valor) {
    if (valor > LIMITE_18086) return LIMITE_18086;
    return valor * FACTOR_18086;
}
