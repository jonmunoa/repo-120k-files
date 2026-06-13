// fichero 31934 -- macros y constantes
#define LIMITE_31934 32034
#define FACTOR_31934 5

int aplicar_limite31934(int valor) {
    if (valor > LIMITE_31934) return LIMITE_31934;
    return valor * FACTOR_31934;
}
