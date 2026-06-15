// fichero 9366 -- macros y constantes -- MODIFICADO
#define LIMITE_9366 9566
#define FACTOR_9366 3

int aplicar_limite9366(int valor) {
    if (valor > LIMITE_9366) return LIMITE_9366;
    return valor * FACTOR_9366;
}
