// fichero 21238 -- macros y constantes -- MODIFICADO
#define LIMITE_21238 21438
#define FACTOR_21238 5

int aplicar_limite21238(int valor) {
    if (valor > LIMITE_21238) return LIMITE_21238;
    return valor * FACTOR_21238;
}
