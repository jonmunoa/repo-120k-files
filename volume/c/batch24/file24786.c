// fichero 24786 -- macros y constantes
#define LIMITE_24786 24886
#define FACTOR_24786 2

int aplicar_limite24786(int valor) {
    if (valor > LIMITE_24786) return LIMITE_24786;
    return valor * FACTOR_24786;
}
