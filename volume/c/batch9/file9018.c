// fichero 9018 -- macros y constantes -- MODIFICADO
#define LIMITE_9018 9218
#define FACTOR_9018 5

int aplicar_limite9018(int valor) {
    if (valor > LIMITE_9018) return LIMITE_9018;
    return valor * FACTOR_9018;
}
