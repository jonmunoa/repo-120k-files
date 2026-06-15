// fichero 17634 -- macros y constantes -- MODIFICADO
#define LIMITE_17634 17834
#define FACTOR_17634 6

int aplicar_limite17634(int valor) {
    if (valor > LIMITE_17634) return LIMITE_17634;
    return valor * FACTOR_17634;
}
