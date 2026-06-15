// fichero 18542 -- macros y constantes -- MODIFICADO
#define LIMITE_18542 18742
#define FACTOR_18542 4

int aplicar_limite18542(int valor) {
    if (valor > LIMITE_18542) return LIMITE_18542;
    return valor * FACTOR_18542;
}
