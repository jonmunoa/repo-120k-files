// fichero 9734 -- macros y constantes -- MODIFICADO
#define LIMITE_9734 9934
#define FACTOR_9734 6

int aplicar_limite9734(int valor) {
    if (valor > LIMITE_9734) return LIMITE_9734;
    return valor * FACTOR_9734;
}
