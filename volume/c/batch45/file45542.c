// fichero 45542 -- macros y constantes -- MODIFICADO
#define LIMITE_45542 45742
#define FACTOR_45542 4

int aplicar_limite45542(int valor) {
    if (valor > LIMITE_45542) return LIMITE_45542;
    return valor * FACTOR_45542;
}
