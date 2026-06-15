// fichero 37634 -- macros y constantes -- MODIFICADO
#define LIMITE_37634 37834
#define FACTOR_37634 6

int aplicar_limite37634(int valor) {
    if (valor > LIMITE_37634) return LIMITE_37634;
    return valor * FACTOR_37634;
}
