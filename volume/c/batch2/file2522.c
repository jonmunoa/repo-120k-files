// fichero 2522 -- macros y constantes
#define LIMITE_2522 2622
#define FACTOR_2522 3

int aplicar_limite2522(int valor) {
    if (valor > LIMITE_2522) return LIMITE_2522;
    return valor * FACTOR_2522;
}
