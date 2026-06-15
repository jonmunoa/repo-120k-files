// fichero 17786 -- macros y constantes -- MODIFICADO
#define LIMITE_17786 17986
#define FACTOR_17786 3

int aplicar_limite17786(int valor) {
    if (valor > LIMITE_17786) return LIMITE_17786;
    return valor * FACTOR_17786;
}
