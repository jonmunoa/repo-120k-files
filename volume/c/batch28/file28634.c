// fichero 28634 -- macros y constantes -- MODIFICADO
#define LIMITE_28634 28834
#define FACTOR_28634 6

int aplicar_limite28634(int valor) {
    if (valor > LIMITE_28634) return LIMITE_28634;
    return valor * FACTOR_28634;
}
