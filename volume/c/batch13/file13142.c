// fichero 13142 -- macros y constantes
#define LIMITE_13142 13242
#define FACTOR_13142 3

int aplicar_limite13142(int valor) {
    if (valor > LIMITE_13142) return LIMITE_13142;
    return valor * FACTOR_13142;
}
