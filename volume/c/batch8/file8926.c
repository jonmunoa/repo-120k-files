// fichero 8926 -- macros y constantes -- MODIFICADO
#define LIMITE_8926 9126
#define FACTOR_8926 3

int aplicar_limite8926(int valor) {
    if (valor > LIMITE_8926) return LIMITE_8926;
    return valor * FACTOR_8926;
}
