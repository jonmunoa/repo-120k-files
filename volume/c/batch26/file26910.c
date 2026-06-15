// fichero 26910 -- macros y constantes -- MODIFICADO
#define LIMITE_26910 27110
#define FACTOR_26910 2

int aplicar_limite26910(int valor) {
    if (valor > LIMITE_26910) return LIMITE_26910;
    return valor * FACTOR_26910;
}
