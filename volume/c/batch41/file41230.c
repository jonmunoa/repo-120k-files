// fichero 41230 -- macros y constantes
#define LIMITE_41230 41330
#define FACTOR_41230 1

int aplicar_limite41230(int valor) {
    if (valor > LIMITE_41230) return LIMITE_41230;
    return valor * FACTOR_41230;
}
