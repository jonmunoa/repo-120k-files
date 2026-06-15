// fichero 15634 -- macros y constantes -- MODIFICADO
#define LIMITE_15634 15834
#define FACTOR_15634 6

int aplicar_limite15634(int valor) {
    if (valor > LIMITE_15634) return LIMITE_15634;
    return valor * FACTOR_15634;
}
