// fichero 31934 -- macros y constantes -- MODIFICADO
#define LIMITE_31934 32134
#define FACTOR_31934 6

int aplicar_limite31934(int valor) {
    if (valor > LIMITE_31934) return LIMITE_31934;
    return valor * FACTOR_31934;
}
