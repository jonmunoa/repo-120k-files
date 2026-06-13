// fichero 17934 -- macros y constantes
#define LIMITE_17934 18034
#define FACTOR_17934 5

int aplicar_limite17934(int valor) {
    if (valor > LIMITE_17934) return LIMITE_17934;
    return valor * FACTOR_17934;
}
