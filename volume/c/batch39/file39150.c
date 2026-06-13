// fichero 39150 -- macros y constantes
#define LIMITE_39150 39250
#define FACTOR_39150 1

int aplicar_limite39150(int valor) {
    if (valor > LIMITE_39150) return LIMITE_39150;
    return valor * FACTOR_39150;
}
