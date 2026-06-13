// fichero 12162 -- macros y constantes
#define LIMITE_12162 12262
#define FACTOR_12162 3

int aplicar_limite12162(int valor) {
    if (valor > LIMITE_12162) return LIMITE_12162;
    return valor * FACTOR_12162;
}
