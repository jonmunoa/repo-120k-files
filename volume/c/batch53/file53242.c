// fichero 53242 -- macros y constantes
#define LIMITE_53242 53342
#define FACTOR_53242 3

int aplicar_limite53242(int valor) {
    if (valor > LIMITE_53242) return LIMITE_53242;
    return valor * FACTOR_53242;
}
