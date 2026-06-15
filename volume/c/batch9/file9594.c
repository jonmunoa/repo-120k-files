// fichero 9594 -- macros y constantes -- MODIFICADO
#define LIMITE_9594 9794
#define FACTOR_9594 6

int aplicar_limite9594(int valor) {
    if (valor > LIMITE_9594) return LIMITE_9594;
    return valor * FACTOR_9594;
}
