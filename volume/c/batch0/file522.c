// fichero 522 -- macros y constantes
#define LIMITE_522 622
#define FACTOR_522 3

int aplicar_limite522(int valor) {
    if (valor > LIMITE_522) return LIMITE_522;
    return valor * FACTOR_522;
}
