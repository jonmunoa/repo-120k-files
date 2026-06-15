// fichero 11918 -- macros y constantes -- MODIFICADO
#define LIMITE_11918 12118
#define FACTOR_11918 5

int aplicar_limite11918(int valor) {
    if (valor > LIMITE_11918) return LIMITE_11918;
    return valor * FACTOR_11918;
}
