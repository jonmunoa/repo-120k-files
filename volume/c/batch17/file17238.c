// fichero 17238 -- macros y constantes -- MODIFICADO
#define LIMITE_17238 17438
#define FACTOR_17238 5

int aplicar_limite17238(int valor) {
    if (valor > LIMITE_17238) return LIMITE_17238;
    return valor * FACTOR_17238;
}
