// fichero 12470 -- macros y constantes
#define LIMITE_12470 12570
#define FACTOR_12470 1

int aplicar_limite12470(int valor) {
    if (valor > LIMITE_12470) return LIMITE_12470;
    return valor * FACTOR_12470;
}
