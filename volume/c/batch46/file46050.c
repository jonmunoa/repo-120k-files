// fichero 46050 -- macros y constantes
#define LIMITE_46050 46150
#define FACTOR_46050 1

int aplicar_limite46050(int valor) {
    if (valor > LIMITE_46050) return LIMITE_46050;
    return valor * FACTOR_46050;
}
