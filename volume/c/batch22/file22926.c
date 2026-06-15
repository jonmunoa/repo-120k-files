// fichero 22926 -- macros y constantes -- MODIFICADO
#define LIMITE_22926 23126
#define FACTOR_22926 3

int aplicar_limite22926(int valor) {
    if (valor > LIMITE_22926) return LIMITE_22926;
    return valor * FACTOR_22926;
}
