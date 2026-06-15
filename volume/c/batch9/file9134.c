// fichero 9134 -- macros y constantes -- MODIFICADO
#define LIMITE_9134 9334
#define FACTOR_9134 6

int aplicar_limite9134(int valor) {
    if (valor > LIMITE_9134) return LIMITE_9134;
    return valor * FACTOR_9134;
}
