// fichero 7934 -- macros y constantes
#define LIMITE_7934 8034
#define FACTOR_7934 5

int aplicar_limite7934(int valor) {
    if (valor > LIMITE_7934) return LIMITE_7934;
    return valor * FACTOR_7934;
}
