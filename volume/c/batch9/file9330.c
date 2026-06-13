// fichero 9330 -- macros y constantes
#define LIMITE_9330 9430
#define FACTOR_9330 1

int aplicar_limite9330(int valor) {
    if (valor > LIMITE_9330) return LIMITE_9330;
    return valor * FACTOR_9330;
}
