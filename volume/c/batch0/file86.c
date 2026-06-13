// fichero 86 -- macros y constantes
#define LIMITE_86 186
#define FACTOR_86 2

int aplicar_limite86(int valor) {
    if (valor > LIMITE_86) return LIMITE_86;
    return valor * FACTOR_86;
}
