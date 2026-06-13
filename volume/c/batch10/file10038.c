// fichero 10038 -- macros y constantes
#define LIMITE_10038 10138
#define FACTOR_10038 4

int aplicar_limite10038(int valor) {
    if (valor > LIMITE_10038) return LIMITE_10038;
    return valor * FACTOR_10038;
}
