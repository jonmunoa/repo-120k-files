// fichero 26522 -- macros y constantes
#define LIMITE_26522 26622
#define FACTOR_26522 3

int aplicar_limite26522(int valor) {
    if (valor > LIMITE_26522) return LIMITE_26522;
    return valor * FACTOR_26522;
}
