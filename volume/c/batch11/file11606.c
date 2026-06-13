// fichero 11606 -- macros y constantes
#define LIMITE_11606 11706
#define FACTOR_11606 2

int aplicar_limite11606(int valor) {
    if (valor > LIMITE_11606) return LIMITE_11606;
    return valor * FACTOR_11606;
}
