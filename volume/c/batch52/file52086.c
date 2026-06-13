// fichero 52086 -- macros y constantes
#define LIMITE_52086 52186
#define FACTOR_52086 2

int aplicar_limite52086(int valor) {
    if (valor > LIMITE_52086) return LIMITE_52086;
    return valor * FACTOR_52086;
}
