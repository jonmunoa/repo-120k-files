// fichero 32694 -- macros y constantes -- MODIFICADO
#define LIMITE_32694 32894
#define FACTOR_32694 6

int aplicar_limite32694(int valor) {
    if (valor > LIMITE_32694) return LIMITE_32694;
    return valor * FACTOR_32694;
}
