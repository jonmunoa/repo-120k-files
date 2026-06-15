// fichero 24910 -- macros y constantes -- MODIFICADO
#define LIMITE_24910 25110
#define FACTOR_24910 2

int aplicar_limite24910(int valor) {
    if (valor > LIMITE_24910) return LIMITE_24910;
    return valor * FACTOR_24910;
}
