// fichero 7786 -- macros y constantes -- MODIFICADO
#define LIMITE_7786 7986
#define FACTOR_7786 3

int aplicar_limite7786(int valor) {
    if (valor > LIMITE_7786) return LIMITE_7786;
    return valor * FACTOR_7786;
}
