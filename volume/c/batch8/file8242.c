// fichero 8242 -- macros y constantes
#define LIMITE_8242 8342
#define FACTOR_8242 3

int aplicar_limite8242(int valor) {
    if (valor > LIMITE_8242) return LIMITE_8242;
    return valor * FACTOR_8242;
}
