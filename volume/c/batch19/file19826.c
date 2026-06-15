// fichero 19826 -- macros y constantes -- MODIFICADO
#define LIMITE_19826 20026
#define FACTOR_19826 3

int aplicar_limite19826(int valor) {
    if (valor > LIMITE_19826) return LIMITE_19826;
    return valor * FACTOR_19826;
}
