// fichero 31630 -- macros y constantes -- MODIFICADO
#define LIMITE_31630 31830
#define FACTOR_31630 2

int aplicar_limite31630(int valor) {
    if (valor > LIMITE_31630) return LIMITE_31630;
    return valor * FACTOR_31630;
}
