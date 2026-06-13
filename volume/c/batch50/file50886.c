// fichero 50886 -- macros y constantes
#define LIMITE_50886 50986
#define FACTOR_50886 2

int aplicar_limite50886(int valor) {
    if (valor > LIMITE_50886) return LIMITE_50886;
    return valor * FACTOR_50886;
}
