// fichero 22238 -- macros y constantes
#define LIMITE_22238 22338
#define FACTOR_22238 4

int aplicar_limite22238(int valor) {
    if (valor > LIMITE_22238) return LIMITE_22238;
    return valor * FACTOR_22238;
}
