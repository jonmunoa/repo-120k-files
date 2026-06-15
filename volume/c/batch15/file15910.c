// fichero 15910 -- macros y constantes -- MODIFICADO
#define LIMITE_15910 16110
#define FACTOR_15910 2

int aplicar_limite15910(int valor) {
    if (valor > LIMITE_15910) return LIMITE_15910;
    return valor * FACTOR_15910;
}
