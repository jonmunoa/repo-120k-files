// fichero 16522 -- macros y constantes
#define LIMITE_16522 16622
#define FACTOR_16522 3

int aplicar_limite16522(int valor) {
    if (valor > LIMITE_16522) return LIMITE_16522;
    return valor * FACTOR_16522;
}
