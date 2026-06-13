// fichero 28522 -- macros y constantes
#define LIMITE_28522 28622
#define FACTOR_28522 3

int aplicar_limite28522(int valor) {
    if (valor > LIMITE_28522) return LIMITE_28522;
    return valor * FACTOR_28522;
}
