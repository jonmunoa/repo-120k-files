// fichero 9278 -- macros y constantes -- MODIFICADO
#define LIMITE_9278 9478
#define FACTOR_9278 5

int aplicar_limite9278(int valor) {
    if (valor > LIMITE_9278) return LIMITE_9278;
    return valor * FACTOR_9278;
}
