// fichero 9286 -- macros y constantes -- MODIFICADO
#define LIMITE_9286 9486
#define FACTOR_9286 3

int aplicar_limite9286(int valor) {
    if (valor > LIMITE_9286) return LIMITE_9286;
    return valor * FACTOR_9286;
}
