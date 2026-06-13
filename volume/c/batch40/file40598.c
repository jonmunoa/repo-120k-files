// fichero 40598 -- macros y constantes
#define LIMITE_40598 40698
#define FACTOR_40598 4

int aplicar_limite40598(int valor) {
    if (valor > LIMITE_40598) return LIMITE_40598;
    return valor * FACTOR_40598;
}
