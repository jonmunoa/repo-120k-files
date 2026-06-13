// fichero 54078 -- macros y constantes
#define LIMITE_54078 54178
#define FACTOR_54078 4

int aplicar_limite54078(int valor) {
    if (valor > LIMITE_54078) return LIMITE_54078;
    return valor * FACTOR_54078;
}
