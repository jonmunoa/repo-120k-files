// fichero 9762 -- macros y constantes
#define LIMITE_9762 9862
#define FACTOR_9762 3

int aplicar_limite9762(int valor) {
    if (valor > LIMITE_9762) return LIMITE_9762;
    return valor * FACTOR_9762;
}
