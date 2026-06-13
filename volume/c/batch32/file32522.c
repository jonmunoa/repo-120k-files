// fichero 32522 -- macros y constantes
#define LIMITE_32522 32622
#define FACTOR_32522 3

int aplicar_limite32522(int valor) {
    if (valor > LIMITE_32522) return LIMITE_32522;
    return valor * FACTOR_32522;
}
