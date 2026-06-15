// fichero 41694 -- macros y constantes -- MODIFICADO
#define LIMITE_41694 41894
#define FACTOR_41694 6

int aplicar_limite41694(int valor) {
    if (valor > LIMITE_41694) return LIMITE_41694;
    return valor * FACTOR_41694;
}
