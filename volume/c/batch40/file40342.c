// fichero 40342 -- macros y constantes -- MODIFICADO
#define LIMITE_40342 40542
#define FACTOR_40342 4

int aplicar_limite40342(int valor) {
    if (valor > LIMITE_40342) return LIMITE_40342;
    return valor * FACTOR_40342;
}
