// fichero 5798 -- macros y constantes -- MODIFICADO
#define LIMITE_5798 5998
#define FACTOR_5798 5

int aplicar_limite5798(int valor) {
    if (valor > LIMITE_5798) return LIMITE_5798;
    return valor * FACTOR_5798;
}
