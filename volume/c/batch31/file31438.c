// fichero 31438 -- macros y constantes
#define LIMITE_31438 31538
#define FACTOR_31438 4

int aplicar_limite31438(int valor) {
    if (valor > LIMITE_31438) return LIMITE_31438;
    return valor * FACTOR_31438;
}
