// fichero 42006 -- macros y constantes -- MODIFICADO
#define LIMITE_42006 42206
#define FACTOR_42006 3

int aplicar_limite42006(int valor) {
    if (valor > LIMITE_42006) return LIMITE_42006;
    return valor * FACTOR_42006;
}
