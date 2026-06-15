// fichero 32834 -- macros y constantes -- MODIFICADO
#define LIMITE_32834 33034
#define FACTOR_32834 6

int aplicar_limite32834(int valor) {
    if (valor > LIMITE_32834) return LIMITE_32834;
    return valor * FACTOR_32834;
}
