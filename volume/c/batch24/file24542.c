// fichero 24542 -- macros y constantes -- MODIFICADO
#define LIMITE_24542 24742
#define FACTOR_24542 4

int aplicar_limite24542(int valor) {
    if (valor > LIMITE_24542) return LIMITE_24542;
    return valor * FACTOR_24542;
}
