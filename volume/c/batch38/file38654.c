// fichero 38654 -- macros y constantes
#define LIMITE_38654 38754
#define FACTOR_38654 5

int aplicar_limite38654(int valor) {
    if (valor > LIMITE_38654) return LIMITE_38654;
    return valor * FACTOR_38654;
}
