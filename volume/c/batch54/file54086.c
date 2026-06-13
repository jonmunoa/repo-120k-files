// fichero 54086 -- macros y constantes
#define LIMITE_54086 54186
#define FACTOR_54086 2

int aplicar_limite54086(int valor) {
    if (valor > LIMITE_54086) return LIMITE_54086;
    return valor * FACTOR_54086;
}
