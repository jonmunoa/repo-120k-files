// fichero 42354 -- macros y constantes -- MODIFICADO
#define LIMITE_42354 42554
#define FACTOR_42354 6

int aplicar_limite42354(int valor) {
    if (valor > LIMITE_42354) return LIMITE_42354;
    return valor * FACTOR_42354;
}
