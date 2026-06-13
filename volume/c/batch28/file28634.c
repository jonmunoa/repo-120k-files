// fichero 28634 -- macros y constantes
#define LIMITE_28634 28734
#define FACTOR_28634 5

int aplicar_limite28634(int valor) {
    if (valor > LIMITE_28634) return LIMITE_28634;
    return valor * FACTOR_28634;
}
