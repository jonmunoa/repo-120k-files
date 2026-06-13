// fichero 32634 -- macros y constantes
#define LIMITE_32634 32734
#define FACTOR_32634 5

int aplicar_limite32634(int valor) {
    if (valor > LIMITE_32634) return LIMITE_32634;
    return valor * FACTOR_32634;
}
