// fichero 32902 -- macros y constantes
#define LIMITE_32902 33002
#define FACTOR_32902 3

int aplicar_limite32902(int valor) {
    if (valor > LIMITE_32902) return LIMITE_32902;
    return valor * FACTOR_32902;
}
