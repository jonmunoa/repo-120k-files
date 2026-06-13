// fichero 45522 -- macros y constantes
#define LIMITE_45522 45622
#define FACTOR_45522 3

int aplicar_limite45522(int valor) {
    if (valor > LIMITE_45522) return LIMITE_45522;
    return valor * FACTOR_45522;
}
