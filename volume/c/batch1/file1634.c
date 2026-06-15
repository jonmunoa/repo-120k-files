// fichero 1634 -- macros y constantes -- MODIFICADO
#define LIMITE_1634 1834
#define FACTOR_1634 6

int aplicar_limite1634(int valor) {
    if (valor > LIMITE_1634) return LIMITE_1634;
    return valor * FACTOR_1634;
}
