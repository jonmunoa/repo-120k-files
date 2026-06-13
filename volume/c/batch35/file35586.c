// fichero 35586 -- macros y constantes
#define LIMITE_35586 35686
#define FACTOR_35586 2

int aplicar_limite35586(int valor) {
    if (valor > LIMITE_35586) return LIMITE_35586;
    return valor * FACTOR_35586;
}
