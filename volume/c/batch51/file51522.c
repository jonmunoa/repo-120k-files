// fichero 51522 -- macros y constantes
#define LIMITE_51522 51622
#define FACTOR_51522 3

int aplicar_limite51522(int valor) {
    if (valor > LIMITE_51522) return LIMITE_51522;
    return valor * FACTOR_51522;
}
