// fichero 50522 -- macros y constantes
#define LIMITE_50522 50622
#define FACTOR_50522 3

int aplicar_limite50522(int valor) {
    if (valor > LIMITE_50522) return LIMITE_50522;
    return valor * FACTOR_50522;
}
