// fichero 40826 -- macros y constantes
#define LIMITE_40826 40926
#define FACTOR_40826 2

int aplicar_limite40826(int valor) {
    if (valor > LIMITE_40826) return LIMITE_40826;
    return valor * FACTOR_40826;
}
