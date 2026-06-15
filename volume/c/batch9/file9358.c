// fichero 9358 -- macros y constantes -- MODIFICADO
#define LIMITE_9358 9558
#define FACTOR_9358 5

int aplicar_limite9358(int valor) {
    if (valor > LIMITE_9358) return LIMITE_9358;
    return valor * FACTOR_9358;
}
