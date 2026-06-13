// fichero 9594 -- macros y constantes
#define LIMITE_9594 9694
#define FACTOR_9594 5

int aplicar_limite9594(int valor) {
    if (valor > LIMITE_9594) return LIMITE_9594;
    return valor * FACTOR_9594;
}
