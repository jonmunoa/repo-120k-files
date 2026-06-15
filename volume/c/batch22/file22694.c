// fichero 22694 -- macros y constantes -- MODIFICADO
#define LIMITE_22694 22894
#define FACTOR_22694 6

int aplicar_limite22694(int valor) {
    if (valor > LIMITE_22694) return LIMITE_22694;
    return valor * FACTOR_22694;
}
