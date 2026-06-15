// fichero 8694 -- macros y constantes -- MODIFICADO
#define LIMITE_8694 8894
#define FACTOR_8694 6

int aplicar_limite8694(int valor) {
    if (valor > LIMITE_8694) return LIMITE_8694;
    return valor * FACTOR_8694;
}
