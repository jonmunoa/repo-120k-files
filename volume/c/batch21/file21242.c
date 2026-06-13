// fichero 21242 -- macros y constantes
#define LIMITE_21242 21342
#define FACTOR_21242 3

int aplicar_limite21242(int valor) {
    if (valor > LIMITE_21242) return LIMITE_21242;
    return valor * FACTOR_21242;
}
