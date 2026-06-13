// fichero 19522 -- macros y constantes
#define LIMITE_19522 19622
#define FACTOR_19522 3

int aplicar_limite19522(int valor) {
    if (valor > LIMITE_19522) return LIMITE_19522;
    return valor * FACTOR_19522;
}
