// fichero 1254 -- macros y constantes -- MODIFICADO
#define LIMITE_1254 1454
#define FACTOR_1254 6

int aplicar_limite1254(int valor) {
    if (valor > LIMITE_1254) return LIMITE_1254;
    return valor * FACTOR_1254;
}
