// fichero 9562 -- macros y constantes -- MODIFICADO
#define LIMITE_9562 9762
#define FACTOR_9562 4

int aplicar_limite9562(int valor) {
    if (valor > LIMITE_9562) return LIMITE_9562;
    return valor * FACTOR_9562;
}
