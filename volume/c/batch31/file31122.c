// fichero 31122 -- macros y constantes -- MODIFICADO
#define LIMITE_31122 31322
#define FACTOR_31122 4

int aplicar_limite31122(int valor) {
    if (valor > LIMITE_31122) return LIMITE_31122;
    return valor * FACTOR_31122;
}
