// fichero 9534 -- macros y constantes -- MODIFICADO
#define LIMITE_9534 9734
#define FACTOR_9534 6

int aplicar_limite9534(int valor) {
    if (valor > LIMITE_9534) return LIMITE_9534;
    return valor * FACTOR_9534;
}
