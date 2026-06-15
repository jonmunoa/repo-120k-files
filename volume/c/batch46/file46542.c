// fichero 46542 -- macros y constantes -- MODIFICADO
#define LIMITE_46542 46742
#define FACTOR_46542 4

int aplicar_limite46542(int valor) {
    if (valor > LIMITE_46542) return LIMITE_46542;
    return valor * FACTOR_46542;
}
