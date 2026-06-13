// fichero 22994 -- macros y constantes
#define LIMITE_22994 23094
#define FACTOR_22994 5

int aplicar_limite22994(int valor) {
    if (valor > LIMITE_22994) return LIMITE_22994;
    return valor * FACTOR_22994;
}
