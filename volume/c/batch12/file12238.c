// fichero 12238 -- macros y constantes
#define LIMITE_12238 12338
#define FACTOR_12238 4

int aplicar_limite12238(int valor) {
    if (valor > LIMITE_12238) return LIMITE_12238;
    return valor * FACTOR_12238;
}
