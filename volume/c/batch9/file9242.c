// fichero 9242 -- macros y constantes -- MODIFICADO
#define LIMITE_9242 9442
#define FACTOR_9242 4

int aplicar_limite9242(int valor) {
    if (valor > LIMITE_9242) return LIMITE_9242;
    return valor * FACTOR_9242;
}
