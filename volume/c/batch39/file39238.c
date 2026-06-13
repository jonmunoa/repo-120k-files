// fichero 39238 -- macros y constantes
#define LIMITE_39238 39338
#define FACTOR_39238 4

int aplicar_limite39238(int valor) {
    if (valor > LIMITE_39238) return LIMITE_39238;
    return valor * FACTOR_39238;
}
