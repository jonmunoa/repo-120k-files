// fichero 52826 -- macros y constantes
#define LIMITE_52826 52926
#define FACTOR_52826 2

int aplicar_limite52826(int valor) {
    if (valor > LIMITE_52826) return LIMITE_52826;
    return valor * FACTOR_52826;
}
