// fichero 23634 -- macros y constantes -- MODIFICADO
#define LIMITE_23634 23834
#define FACTOR_23634 6

int aplicar_limite23634(int valor) {
    if (valor > LIMITE_23634) return LIMITE_23634;
    return valor * FACTOR_23634;
}
