// fichero 46614 -- macros y constantes -- MODIFICADO
#define LIMITE_46614 46814
#define FACTOR_46614 6

int aplicar_limite46614(int valor) {
    if (valor > LIMITE_46614) return LIMITE_46614;
    return valor * FACTOR_46614;
}
