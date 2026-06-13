// fichero 38238 -- macros y constantes
#define LIMITE_38238 38338
#define FACTOR_38238 4

int aplicar_limite38238(int valor) {
    if (valor > LIMITE_38238) return LIMITE_38238;
    return valor * FACTOR_38238;
}
