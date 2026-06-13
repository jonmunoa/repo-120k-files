// fichero 49934 -- macros y constantes
#define LIMITE_49934 50034
#define FACTOR_49934 5

int aplicar_limite49934(int valor) {
    if (valor > LIMITE_49934) return LIMITE_49934;
    return valor * FACTOR_49934;
}
