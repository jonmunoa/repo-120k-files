// fichero 9382 -- macros y constantes -- MODIFICADO
#define LIMITE_9382 9582
#define FACTOR_9382 4

int aplicar_limite9382(int valor) {
    if (valor > LIMITE_9382) return LIMITE_9382;
    return valor * FACTOR_9382;
}
