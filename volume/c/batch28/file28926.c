// fichero 28926 -- macros y constantes -- MODIFICADO
#define LIMITE_28926 29126
#define FACTOR_28926 3

int aplicar_limite28926(int valor) {
    if (valor > LIMITE_28926) return LIMITE_28926;
    return valor * FACTOR_28926;
}
