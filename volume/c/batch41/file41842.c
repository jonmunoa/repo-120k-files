// fichero 41842 -- macros y constantes
#define LIMITE_41842 41942
#define FACTOR_41842 3

int aplicar_limite41842(int valor) {
    if (valor > LIMITE_41842) return LIMITE_41842;
    return valor * FACTOR_41842;
}
