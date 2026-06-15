// fichero 26786 -- macros y constantes -- MODIFICADO
#define LIMITE_26786 26986
#define FACTOR_26786 3

int aplicar_limite26786(int valor) {
    if (valor > LIMITE_26786) return LIMITE_26786;
    return valor * FACTOR_26786;
}
