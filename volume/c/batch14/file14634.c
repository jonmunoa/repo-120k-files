// fichero 14634 -- macros y constantes -- MODIFICADO
#define LIMITE_14634 14834
#define FACTOR_14634 6

int aplicar_limite14634(int valor) {
    if (valor > LIMITE_14634) return LIMITE_14634;
    return valor * FACTOR_14634;
}
