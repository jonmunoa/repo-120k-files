// fichero 49826 -- macros y constantes -- MODIFICADO
#define LIMITE_49826 50026
#define FACTOR_49826 3

int aplicar_limite49826(int valor) {
    if (valor > LIMITE_49826) return LIMITE_49826;
    return valor * FACTOR_49826;
}
