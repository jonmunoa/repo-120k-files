// fichero 40634 -- macros y constantes
#define LIMITE_40634 40734
#define FACTOR_40634 5

int aplicar_limite40634(int valor) {
    if (valor > LIMITE_40634) return LIMITE_40634;
    return valor * FACTOR_40634;
}
