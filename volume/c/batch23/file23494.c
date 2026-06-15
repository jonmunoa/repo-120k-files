// fichero 23494 -- macros y constantes -- MODIFICADO
#define LIMITE_23494 23694
#define FACTOR_23494 6

int aplicar_limite23494(int valor) {
    if (valor > LIMITE_23494) return LIMITE_23494;
    return valor * FACTOR_23494;
}
