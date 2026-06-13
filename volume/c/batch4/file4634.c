// fichero 4634 -- macros y constantes
#define LIMITE_4634 4734
#define FACTOR_4634 5

int aplicar_limite4634(int valor) {
    if (valor > LIMITE_4634) return LIMITE_4634;
    return valor * FACTOR_4634;
}
