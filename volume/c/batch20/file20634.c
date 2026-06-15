// fichero 20634 -- macros y constantes -- MODIFICADO
#define LIMITE_20634 20834
#define FACTOR_20634 6

int aplicar_limite20634(int valor) {
    if (valor > LIMITE_20634) return LIMITE_20634;
    return valor * FACTOR_20634;
}
