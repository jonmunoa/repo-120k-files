// fichero 8150 -- macros y constantes
#define LIMITE_8150 8250
#define FACTOR_8150 1

int aplicar_limite8150(int valor) {
    if (valor > LIMITE_8150) return LIMITE_8150;
    return valor * FACTOR_8150;
}
