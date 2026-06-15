// fichero 36634 -- macros y constantes -- MODIFICADO
#define LIMITE_36634 36834
#define FACTOR_36634 6

int aplicar_limite36634(int valor) {
    if (valor > LIMITE_36634) return LIMITE_36634;
    return valor * FACTOR_36634;
}
