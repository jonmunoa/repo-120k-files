// fichero 30474 -- macros y constantes
#define LIMITE_30474 30574
#define FACTOR_30474 5

int aplicar_limite30474(int valor) {
    if (valor > LIMITE_30474) return LIMITE_30474;
    return valor * FACTOR_30474;
}
