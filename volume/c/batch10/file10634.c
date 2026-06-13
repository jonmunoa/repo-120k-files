// fichero 10634 -- macros y constantes
#define LIMITE_10634 10734
#define FACTOR_10634 5

int aplicar_limite10634(int valor) {
    if (valor > LIMITE_10634) return LIMITE_10634;
    return valor * FACTOR_10634;
}
