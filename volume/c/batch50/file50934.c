// fichero 50934 -- macros y constantes
#define LIMITE_50934 51034
#define FACTOR_50934 5

int aplicar_limite50934(int valor) {
    if (valor > LIMITE_50934) return LIMITE_50934;
    return valor * FACTOR_50934;
}
