// fichero 18522 -- macros y constantes
#define LIMITE_18522 18622
#define FACTOR_18522 3

int aplicar_limite18522(int valor) {
    if (valor > LIMITE_18522) return LIMITE_18522;
    return valor * FACTOR_18522;
}
