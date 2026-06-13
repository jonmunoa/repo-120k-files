// fichero 35522 -- macros y constantes
#define LIMITE_35522 35622
#define FACTOR_35522 3

int aplicar_limite35522(int valor) {
    if (valor > LIMITE_35522) return LIMITE_35522;
    return valor * FACTOR_35522;
}
