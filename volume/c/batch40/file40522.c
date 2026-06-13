// fichero 40522 -- macros y constantes
#define LIMITE_40522 40622
#define FACTOR_40522 3

int aplicar_limite40522(int valor) {
    if (valor > LIMITE_40522) return LIMITE_40522;
    return valor * FACTOR_40522;
}
