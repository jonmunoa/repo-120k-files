// fichero 8734 -- macros y constantes
#define LIMITE_8734 8834
#define FACTOR_8734 5

int aplicar_limite8734(int valor) {
    if (valor > LIMITE_8734) return LIMITE_8734;
    return valor * FACTOR_8734;
}
