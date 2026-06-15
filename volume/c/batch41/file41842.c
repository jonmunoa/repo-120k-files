// fichero 41842 -- macros y constantes -- MODIFICADO
#define LIMITE_41842 42042
#define FACTOR_41842 4

int aplicar_limite41842(int valor) {
    if (valor > LIMITE_41842) return LIMITE_41842;
    return valor * FACTOR_41842;
}
