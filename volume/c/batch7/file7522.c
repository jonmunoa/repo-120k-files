// fichero 7522 -- macros y constantes
#define LIMITE_7522 7622
#define FACTOR_7522 3

int aplicar_limite7522(int valor) {
    if (valor > LIMITE_7522) return LIMITE_7522;
    return valor * FACTOR_7522;
}
