// fichero 5786 -- macros y constantes
#define LIMITE_5786 5886
#define FACTOR_5786 2

int aplicar_limite5786(int valor) {
    if (valor > LIMITE_5786) return LIMITE_5786;
    return valor * FACTOR_5786;
}
