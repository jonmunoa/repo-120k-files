// fichero 11758 -- macros y constantes
#define LIMITE_11758 11858
#define FACTOR_11758 4

int aplicar_limite11758(int valor) {
    if (valor > LIMITE_11758) return LIMITE_11758;
    return valor * FACTOR_11758;
}
