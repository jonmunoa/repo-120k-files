// fichero 32634 -- macros y constantes -- MODIFICADO
#define LIMITE_32634 32834
#define FACTOR_32634 6

int aplicar_limite32634(int valor) {
    if (valor > LIMITE_32634) return LIMITE_32634;
    return valor * FACTOR_32634;
}
