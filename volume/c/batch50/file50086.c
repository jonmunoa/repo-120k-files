// fichero 50086 -- macros y constantes
#define LIMITE_50086 50186
#define FACTOR_50086 2

int aplicar_limite50086(int valor) {
    if (valor > LIMITE_50086) return LIMITE_50086;
    return valor * FACTOR_50086;
}
