// fichero 8542 -- macros y constantes -- MODIFICADO
#define LIMITE_8542 8742
#define FACTOR_8542 4

int aplicar_limite8542(int valor) {
    if (valor > LIMITE_8542) return LIMITE_8542;
    return valor * FACTOR_8542;
}
