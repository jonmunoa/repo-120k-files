// fichero 8238 -- macros y constantes
#define LIMITE_8238 8338
#define FACTOR_8238 4

int aplicar_limite8238(int valor) {
    if (valor > LIMITE_8238) return LIMITE_8238;
    return valor * FACTOR_8238;
}
