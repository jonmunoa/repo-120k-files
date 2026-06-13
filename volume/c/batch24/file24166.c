// fichero 24166 -- macros y constantes
#define LIMITE_24166 24266
#define FACTOR_24166 2

int aplicar_limite24166(int valor) {
    if (valor > LIMITE_24166) return LIMITE_24166;
    return valor * FACTOR_24166;
}
