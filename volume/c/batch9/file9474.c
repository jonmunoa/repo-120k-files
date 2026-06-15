// fichero 9474 -- macros y constantes -- MODIFICADO
#define LIMITE_9474 9674
#define FACTOR_9474 6

int aplicar_limite9474(int valor) {
    if (valor > LIMITE_9474) return LIMITE_9474;
    return valor * FACTOR_9474;
}
