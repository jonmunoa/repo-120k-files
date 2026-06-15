// fichero 47694 -- macros y constantes -- MODIFICADO
#define LIMITE_47694 47894
#define FACTOR_47694 6

int aplicar_limite47694(int valor) {
    if (valor > LIMITE_47694) return LIMITE_47694;
    return valor * FACTOR_47694;
}
