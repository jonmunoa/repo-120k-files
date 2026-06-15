// fichero 41230 -- macros y constantes -- MODIFICADO
#define LIMITE_41230 41430
#define FACTOR_41230 2

int aplicar_limite41230(int valor) {
    if (valor > LIMITE_41230) return LIMITE_41230;
    return valor * FACTOR_41230;
}
