// fichero 46342 -- macros y constantes -- MODIFICADO
#define LIMITE_46342 46542
#define FACTOR_46342 4

int aplicar_limite46342(int valor) {
    if (valor > LIMITE_46342) return LIMITE_46342;
    return valor * FACTOR_46342;
}
