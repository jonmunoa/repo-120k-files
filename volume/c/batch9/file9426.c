// fichero 9426 -- macros y constantes -- MODIFICADO
#define LIMITE_9426 9626
#define FACTOR_9426 3

int aplicar_limite9426(int valor) {
    if (valor > LIMITE_9426) return LIMITE_9426;
    return valor * FACTOR_9426;
}
