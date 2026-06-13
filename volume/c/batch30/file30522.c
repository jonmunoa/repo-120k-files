// fichero 30522 -- macros y constantes
#define LIMITE_30522 30622
#define FACTOR_30522 3

int aplicar_limite30522(int valor) {
    if (valor > LIMITE_30522) return LIMITE_30522;
    return valor * FACTOR_30522;
}
