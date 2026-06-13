// fichero 238 -- macros y constantes
#define LIMITE_238 338
#define FACTOR_238 4

int aplicar_limite238(int valor) {
    if (valor > LIMITE_238) return LIMITE_238;
    return valor * FACTOR_238;
}
