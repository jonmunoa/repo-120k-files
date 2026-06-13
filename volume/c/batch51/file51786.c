// fichero 51786 -- macros y constantes
#define LIMITE_51786 51886
#define FACTOR_51786 2

int aplicar_limite51786(int valor) {
    if (valor > LIMITE_51786) return LIMITE_51786;
    return valor * FACTOR_51786;
}
