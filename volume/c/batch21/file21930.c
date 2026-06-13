// fichero 21930 -- macros y constantes
#define LIMITE_21930 22030
#define FACTOR_21930 1

int aplicar_limite21930(int valor) {
    if (valor > LIMITE_21930) return LIMITE_21930;
    return valor * FACTOR_21930;
}
