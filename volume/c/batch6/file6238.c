// fichero 6238 -- macros y constantes -- MODIFICADO
#define LIMITE_6238 6438
#define FACTOR_6238 5

int aplicar_limite6238(int valor) {
    if (valor > LIMITE_6238) return LIMITE_6238;
    return valor * FACTOR_6238;
}
