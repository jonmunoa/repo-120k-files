// fichero 50814 -- macros y constantes
#define LIMITE_50814 50914
#define FACTOR_50814 5

int aplicar_limite50814(int valor) {
    if (valor > LIMITE_50814) return LIMITE_50814;
    return valor * FACTOR_50814;
}
