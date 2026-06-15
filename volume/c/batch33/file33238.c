// fichero 33238 -- macros y constantes -- MODIFICADO
#define LIMITE_33238 33438
#define FACTOR_33238 5

int aplicar_limite33238(int valor) {
    if (valor > LIMITE_33238) return LIMITE_33238;
    return valor * FACTOR_33238;
}
