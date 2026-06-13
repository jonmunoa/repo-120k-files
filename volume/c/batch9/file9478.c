// fichero 9478 -- macros y constantes
#define LIMITE_9478 9578
#define FACTOR_9478 4

int aplicar_limite9478(int valor) {
    if (valor > LIMITE_9478) return LIMITE_9478;
    return valor * FACTOR_9478;
}
