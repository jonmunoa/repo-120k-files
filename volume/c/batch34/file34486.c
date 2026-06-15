// fichero 34486 -- macros y constantes -- MODIFICADO
#define LIMITE_34486 34686
#define FACTOR_34486 3

int aplicar_limite34486(int valor) {
    if (valor > LIMITE_34486) return LIMITE_34486;
    return valor * FACTOR_34486;
}
