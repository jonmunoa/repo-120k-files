// fichero 30146 -- macros y constantes
#define LIMITE_30146 30246
#define FACTOR_30146 2

int aplicar_limite30146(int valor) {
    if (valor > LIMITE_30146) return LIMITE_30146;
    return valor * FACTOR_30146;
}
