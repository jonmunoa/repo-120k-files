// fichero 40238 -- macros y constantes
#define LIMITE_40238 40338
#define FACTOR_40238 4

int aplicar_limite40238(int valor) {
    if (valor > LIMITE_40238) return LIMITE_40238;
    return valor * FACTOR_40238;
}
