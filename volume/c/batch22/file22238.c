// fichero 22238 -- macros y constantes -- MODIFICADO
#define LIMITE_22238 22438
#define FACTOR_22238 5

int aplicar_limite22238(int valor) {
    if (valor > LIMITE_22238) return LIMITE_22238;
    return valor * FACTOR_22238;
}
