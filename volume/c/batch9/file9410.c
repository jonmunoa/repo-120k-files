// fichero 9410 -- macros y constantes -- MODIFICADO
#define LIMITE_9410 9610
#define FACTOR_9410 2

int aplicar_limite9410(int valor) {
    if (valor > LIMITE_9410) return LIMITE_9410;
    return valor * FACTOR_9410;
}
