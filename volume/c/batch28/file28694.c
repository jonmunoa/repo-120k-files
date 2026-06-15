// fichero 28694 -- macros y constantes -- MODIFICADO
#define LIMITE_28694 28894
#define FACTOR_28694 6

int aplicar_limite28694(int valor) {
    if (valor > LIMITE_28694) return LIMITE_28694;
    return valor * FACTOR_28694;
}
