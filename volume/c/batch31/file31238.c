// fichero 31238 -- macros y constantes
#define LIMITE_31238 31338
#define FACTOR_31238 4

int aplicar_limite31238(int valor) {
    if (valor > LIMITE_31238) return LIMITE_31238;
    return valor * FACTOR_31238;
}
