// fichero 4522 -- macros y constantes
#define LIMITE_4522 4622
#define FACTOR_4522 3

int aplicar_limite4522(int valor) {
    if (valor > LIMITE_4522) return LIMITE_4522;
    return valor * FACTOR_4522;
}
