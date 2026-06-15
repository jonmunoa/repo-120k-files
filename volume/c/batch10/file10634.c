// fichero 10634 -- macros y constantes -- MODIFICADO
#define LIMITE_10634 10834
#define FACTOR_10634 6

int aplicar_limite10634(int valor) {
    if (valor > LIMITE_10634) return LIMITE_10634;
    return valor * FACTOR_10634;
}
