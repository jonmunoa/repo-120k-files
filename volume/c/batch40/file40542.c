// fichero 40542 -- macros y constantes -- MODIFICADO
#define LIMITE_40542 40742
#define FACTOR_40542 4

int aplicar_limite40542(int valor) {
    if (valor > LIMITE_40542) return LIMITE_40542;
    return valor * FACTOR_40542;
}
