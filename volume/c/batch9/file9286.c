// fichero 9286 -- macros y constantes
#define LIMITE_9286 9386
#define FACTOR_9286 2

int aplicar_limite9286(int valor) {
    if (valor > LIMITE_9286) return LIMITE_9286;
    return valor * FACTOR_9286;
}
