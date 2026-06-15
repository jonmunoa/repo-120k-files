// fichero 21634 -- macros y constantes -- MODIFICADO
#define LIMITE_21634 21834
#define FACTOR_21634 6

int aplicar_limite21634(int valor) {
    if (valor > LIMITE_21634) return LIMITE_21634;
    return valor * FACTOR_21634;
}
