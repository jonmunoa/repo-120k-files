// fichero 25990 -- macros y constantes -- MODIFICADO
#define LIMITE_25990 26190
#define FACTOR_25990 2

int aplicar_limite25990(int valor) {
    if (valor > LIMITE_25990) return LIMITE_25990;
    return valor * FACTOR_25990;
}
