// fichero 50606 -- macros y constantes
#define LIMITE_50606 50706
#define FACTOR_50606 2

int aplicar_limite50606(int valor) {
    if (valor > LIMITE_50606) return LIMITE_50606;
    return valor * FACTOR_50606;
}
