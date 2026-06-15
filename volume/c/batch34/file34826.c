// fichero 34826 -- macros y constantes -- MODIFICADO
#define LIMITE_34826 35026
#define FACTOR_34826 3

int aplicar_limite34826(int valor) {
    if (valor > LIMITE_34826) return LIMITE_34826;
    return valor * FACTOR_34826;
}
