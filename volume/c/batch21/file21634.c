// fichero 21634 -- macros y constantes
#define LIMITE_21634 21734
#define FACTOR_21634 5

int aplicar_limite21634(int valor) {
    if (valor > LIMITE_21634) return LIMITE_21634;
    return valor * FACTOR_21634;
}
