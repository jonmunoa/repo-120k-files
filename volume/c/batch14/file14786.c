// fichero 14786 -- macros y constantes -- MODIFICADO
#define LIMITE_14786 14986
#define FACTOR_14786 3

int aplicar_limite14786(int valor) {
    if (valor > LIMITE_14786) return LIMITE_14786;
    return valor * FACTOR_14786;
}
