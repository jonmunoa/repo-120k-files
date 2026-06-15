// fichero 7238 -- macros y constantes -- MODIFICADO
#define LIMITE_7238 7438
#define FACTOR_7238 5

int aplicar_limite7238(int valor) {
    if (valor > LIMITE_7238) return LIMITE_7238;
    return valor * FACTOR_7238;
}
