// fichero 16934 -- macros y constantes
#define LIMITE_16934 17034
#define FACTOR_16934 5

int aplicar_limite16934(int valor) {
    if (valor > LIMITE_16934) return LIMITE_16934;
    return valor * FACTOR_16934;
}
