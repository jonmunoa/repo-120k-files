// fichero 35634 -- macros y constantes -- MODIFICADO
#define LIMITE_35634 35834
#define FACTOR_35634 6

int aplicar_limite35634(int valor) {
    if (valor > LIMITE_35634) return LIMITE_35634;
    return valor * FACTOR_35634;
}
