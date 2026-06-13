// fichero 50786 -- macros y constantes
#define LIMITE_50786 50886
#define FACTOR_50786 2

int aplicar_limite50786(int valor) {
    if (valor > LIMITE_50786) return LIMITE_50786;
    return valor * FACTOR_50786;
}
