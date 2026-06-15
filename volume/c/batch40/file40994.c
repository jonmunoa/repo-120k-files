// fichero 40994 -- macros y constantes -- MODIFICADO
#define LIMITE_40994 41194
#define FACTOR_40994 6

int aplicar_limite40994(int valor) {
    if (valor > LIMITE_40994) return LIMITE_40994;
    return valor * FACTOR_40994;
}
