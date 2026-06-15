// fichero 45786 -- macros y constantes -- MODIFICADO
#define LIMITE_45786 45986
#define FACTOR_45786 3

int aplicar_limite45786(int valor) {
    if (valor > LIMITE_45786) return LIMITE_45786;
    return valor * FACTOR_45786;
}
