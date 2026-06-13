// fichero 8522 -- macros y constantes
#define LIMITE_8522 8622
#define FACTOR_8522 3

int aplicar_limite8522(int valor) {
    if (valor > LIMITE_8522) return LIMITE_8522;
    return valor * FACTOR_8522;
}
