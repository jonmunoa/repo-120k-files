// fichero 14694 -- macros y constantes -- MODIFICADO
#define LIMITE_14694 14894
#define FACTOR_14694 6

int aplicar_limite14694(int valor) {
    if (valor > LIMITE_14694) return LIMITE_14694;
    return valor * FACTOR_14694;
}
