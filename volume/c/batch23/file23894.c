// fichero 23894 -- macros y constantes -- MODIFICADO
#define LIMITE_23894 24094
#define FACTOR_23894 6

int aplicar_limite23894(int valor) {
    if (valor > LIMITE_23894) return LIMITE_23894;
    return valor * FACTOR_23894;
}
