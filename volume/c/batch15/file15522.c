// fichero 15522 -- macros y constantes
#define LIMITE_15522 15622
#define FACTOR_15522 3

int aplicar_limite15522(int valor) {
    if (valor > LIMITE_15522) return LIMITE_15522;
    return valor * FACTOR_15522;
}
