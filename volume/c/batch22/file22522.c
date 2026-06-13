// fichero 22522 -- macros y constantes
#define LIMITE_22522 22622
#define FACTOR_22522 3

int aplicar_limite22522(int valor) {
    if (valor > LIMITE_22522) return LIMITE_22522;
    return valor * FACTOR_22522;
}
