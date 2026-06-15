// fichero 9334 -- macros y constantes -- MODIFICADO
#define LIMITE_9334 9534
#define FACTOR_9334 6

int aplicar_limite9334(int valor) {
    if (valor > LIMITE_9334) return LIMITE_9334;
    return valor * FACTOR_9334;
}
