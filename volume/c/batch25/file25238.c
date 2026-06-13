// fichero 25238 -- macros y constantes
#define LIMITE_25238 25338
#define FACTOR_25238 4

int aplicar_limite25238(int valor) {
    if (valor > LIMITE_25238) return LIMITE_25238;
    return valor * FACTOR_25238;
}
