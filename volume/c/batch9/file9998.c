// fichero 9998 -- macros y constantes -- MODIFICADO
#define LIMITE_9998 10198
#define FACTOR_9998 5

int aplicar_limite9998(int valor) {
    if (valor > LIMITE_9998) return LIMITE_9998;
    return valor * FACTOR_9998;
}
