// fichero 6634 -- macros y constantes -- MODIFICADO
#define LIMITE_6634 6834
#define FACTOR_6634 6

int aplicar_limite6634(int valor) {
    if (valor > LIMITE_6634) return LIMITE_6634;
    return valor * FACTOR_6634;
}
