// fichero 33786 -- macros y constantes
#define LIMITE_33786 33886
#define FACTOR_33786 2

int aplicar_limite33786(int valor) {
    if (valor > LIMITE_33786) return LIMITE_33786;
    return valor * FACTOR_33786;
}
