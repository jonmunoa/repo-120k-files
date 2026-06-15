// fichero 49786 -- macros y constantes -- MODIFICADO
#define LIMITE_49786 49986
#define FACTOR_49786 3

int aplicar_limite49786(int valor) {
    if (valor > LIMITE_49786) return LIMITE_49786;
    return valor * FACTOR_49786;
}
