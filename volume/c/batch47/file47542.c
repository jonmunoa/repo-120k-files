// fichero 47542 -- macros y constantes -- MODIFICADO
#define LIMITE_47542 47742
#define FACTOR_47542 4

int aplicar_limite47542(int valor) {
    if (valor > LIMITE_47542) return LIMITE_47542;
    return valor * FACTOR_47542;
}
