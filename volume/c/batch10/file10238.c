// fichero 10238 -- macros y constantes -- MODIFICADO
#define LIMITE_10238 10438
#define FACTOR_10238 5

int aplicar_limite10238(int valor) {
    if (valor > LIMITE_10238) return LIMITE_10238;
    return valor * FACTOR_10238;
}
