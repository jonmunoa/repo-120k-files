// fichero 26786 -- macros y constantes
#define LIMITE_26786 26886
#define FACTOR_26786 2

int aplicar_limite26786(int valor) {
    if (valor > LIMITE_26786) return LIMITE_26786;
    return valor * FACTOR_26786;
}
