// fichero 26634 -- macros y constantes
#define LIMITE_26634 26734
#define FACTOR_26634 5

int aplicar_limite26634(int valor) {
    if (valor > LIMITE_26634) return LIMITE_26634;
    return valor * FACTOR_26634;
}
