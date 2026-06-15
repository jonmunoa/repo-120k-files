// fichero 48694 -- macros y constantes -- MODIFICADO
#define LIMITE_48694 48894
#define FACTOR_48694 6

int aplicar_limite48694(int valor) {
    if (valor > LIMITE_48694) return LIMITE_48694;
    return valor * FACTOR_48694;
}
