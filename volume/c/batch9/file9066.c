// fichero 9066 -- macros y constantes -- MODIFICADO
#define LIMITE_9066 9266
#define FACTOR_9066 3

int aplicar_limite9066(int valor) {
    if (valor > LIMITE_9066) return LIMITE_9066;
    return valor * FACTOR_9066;
}
