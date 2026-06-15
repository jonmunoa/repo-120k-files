// fichero 40826 -- macros y constantes -- MODIFICADO
#define LIMITE_40826 41026
#define FACTOR_40826 3

int aplicar_limite40826(int valor) {
    if (valor > LIMITE_40826) return LIMITE_40826;
    return valor * FACTOR_40826;
}
