// fichero 40994 -- macros y constantes
#define LIMITE_40994 41094
#define FACTOR_40994 5

int aplicar_limite40994(int valor) {
    if (valor > LIMITE_40994) return LIMITE_40994;
    return valor * FACTOR_40994;
}
