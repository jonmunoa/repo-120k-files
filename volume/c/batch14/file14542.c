// fichero 14542 -- macros y constantes -- MODIFICADO
#define LIMITE_14542 14742
#define FACTOR_14542 4

int aplicar_limite14542(int valor) {
    if (valor > LIMITE_14542) return LIMITE_14542;
    return valor * FACTOR_14542;
}
