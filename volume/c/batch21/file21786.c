// fichero 21786 -- macros y constantes
#define LIMITE_21786 21886
#define FACTOR_21786 2

int aplicar_limite21786(int valor) {
    if (valor > LIMITE_21786) return LIMITE_21786;
    return valor * FACTOR_21786;
}
