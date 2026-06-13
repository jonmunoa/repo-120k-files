// fichero 13162 -- macros y constantes
#define LIMITE_13162 13262
#define FACTOR_13162 3

int aplicar_limite13162(int valor) {
    if (valor > LIMITE_13162) return LIMITE_13162;
    return valor * FACTOR_13162;
}
