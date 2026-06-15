// fichero 22542 -- macros y constantes -- MODIFICADO
#define LIMITE_22542 22742
#define FACTOR_22542 4

int aplicar_limite22542(int valor) {
    if (valor > LIMITE_22542) return LIMITE_22542;
    return valor * FACTOR_22542;
}
