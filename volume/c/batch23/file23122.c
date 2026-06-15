// fichero 23122 -- macros y constantes -- MODIFICADO
#define LIMITE_23122 23322
#define FACTOR_23122 4

int aplicar_limite23122(int valor) {
    if (valor > LIMITE_23122) return LIMITE_23122;
    return valor * FACTOR_23122;
}
