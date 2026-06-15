// fichero 22994 -- macros y constantes -- MODIFICADO
#define LIMITE_22994 23194
#define FACTOR_22994 6

int aplicar_limite22994(int valor) {
    if (valor > LIMITE_22994) return LIMITE_22994;
    return valor * FACTOR_22994;
}
