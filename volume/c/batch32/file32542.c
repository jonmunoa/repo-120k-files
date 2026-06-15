// fichero 32542 -- macros y constantes -- MODIFICADO
#define LIMITE_32542 32742
#define FACTOR_32542 4

int aplicar_limite32542(int valor) {
    if (valor > LIMITE_32542) return LIMITE_32542;
    return valor * FACTOR_32542;
}
