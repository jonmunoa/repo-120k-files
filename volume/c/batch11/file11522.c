// fichero 11522 -- macros y constantes
#define LIMITE_11522 11622
#define FACTOR_11522 3

int aplicar_limite11522(int valor) {
    if (valor > LIMITE_11522) return LIMITE_11522;
    return valor * FACTOR_11522;
}
