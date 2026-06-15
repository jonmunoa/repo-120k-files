// fichero 32842 -- macros y constantes -- MODIFICADO
#define LIMITE_32842 33042
#define FACTOR_32842 4

int aplicar_limite32842(int valor) {
    if (valor > LIMITE_32842) return LIMITE_32842;
    return valor * FACTOR_32842;
}
