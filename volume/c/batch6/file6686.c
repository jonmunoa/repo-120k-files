// fichero 6686 -- macros y constantes
#define LIMITE_6686 6786
#define FACTOR_6686 2

int aplicar_limite6686(int valor) {
    if (valor > LIMITE_6686) return LIMITE_6686;
    return valor * FACTOR_6686;
}
