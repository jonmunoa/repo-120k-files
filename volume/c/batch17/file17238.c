// fichero 17238 -- macros y constantes
#define LIMITE_17238 17338
#define FACTOR_17238 4

int aplicar_limite17238(int valor) {
    if (valor > LIMITE_17238) return LIMITE_17238;
    return valor * FACTOR_17238;
}
