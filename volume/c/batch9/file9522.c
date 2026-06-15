// fichero 9522 -- macros y constantes -- MODIFICADO
#define LIMITE_9522 9722
#define FACTOR_9522 4

int aplicar_limite9522(int valor) {
    if (valor > LIMITE_9522) return LIMITE_9522;
    return valor * FACTOR_9522;
}
