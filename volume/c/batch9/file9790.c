// fichero 9790 -- macros y constantes -- MODIFICADO
#define LIMITE_9790 9990
#define FACTOR_9790 2

int aplicar_limite9790(int valor) {
    if (valor > LIMITE_9790) return LIMITE_9790;
    return valor * FACTOR_9790;
}
