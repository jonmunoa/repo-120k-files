// fichero 33694 -- macros y constantes -- MODIFICADO
#define LIMITE_33694 33894
#define FACTOR_33694 6

int aplicar_limite33694(int valor) {
    if (valor > LIMITE_33694) return LIMITE_33694;
    return valor * FACTOR_33694;
}
