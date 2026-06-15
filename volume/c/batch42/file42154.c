// fichero 42154 -- macros y constantes -- MODIFICADO
#define LIMITE_42154 42354
#define FACTOR_42154 6

int aplicar_limite42154(int valor) {
    if (valor > LIMITE_42154) return LIMITE_42154;
    return valor * FACTOR_42154;
}
