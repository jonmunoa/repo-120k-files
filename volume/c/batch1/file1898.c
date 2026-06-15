// fichero 1898 -- macros y constantes -- MODIFICADO
#define LIMITE_1898 2098
#define FACTOR_1898 5

int aplicar_limite1898(int valor) {
    if (valor > LIMITE_1898) return LIMITE_1898;
    return valor * FACTOR_1898;
}
