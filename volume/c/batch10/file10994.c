// fichero 10994 -- macros y constantes -- MODIFICADO
#define LIMITE_10994 11194
#define FACTOR_10994 6

int aplicar_limite10994(int valor) {
    if (valor > LIMITE_10994) return LIMITE_10994;
    return valor * FACTOR_10994;
}
