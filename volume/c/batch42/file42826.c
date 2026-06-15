// fichero 42826 -- macros y constantes -- MODIFICADO
#define LIMITE_42826 43026
#define FACTOR_42826 3

int aplicar_limite42826(int valor) {
    if (valor > LIMITE_42826) return LIMITE_42826;
    return valor * FACTOR_42826;
}
